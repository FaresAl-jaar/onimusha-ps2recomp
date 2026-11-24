# Onimusha: Dawn of Dreams PC Port, Quellstand 24.11.2026 morgens

Stand: Das komplette Intro läuft (Memory Card Dialog, CAPCOM, Gewaltwarnung, Dolby, Sofdec, ADX Logo).
Danach startet das Spiel das Sofdec Eröffnungsvideo \IMAGE\6\66. und bleibt bisher schwarz.

## Inhalt

* `PS2Recomp/`: kompletter Quellbaum ohne `out/` und `.git/`, inklusive generiertem Runner
  (`ps2xRuntime/src/runner`, 11792 Dateien, darin 9 von Hand ersetzte libpad2/libvib Dateien und
  temporäre Debug Probes, Zeilen `[probe ...]` und `[px ...]` im Log)
* `CHANGES_vs_e563698.patch`: alle Quelländerungen gegen Upstream e563698 (ohne Runner)
* `CHANGES_vs_stand_2026-11-24.patch`: nur was seit deinem Windows Stand dazugekommen ist
  (enthält den Schrift Fix, die IPU, die Thread Rückgabewerte und den PMFHL Fix)
* `logs/`: Boot Logs und Screenshots der letzten Läufe
* `onimusha_tooling/`: Recompiler Konfiguration, Analyse Skripte (`tools/`), Funktionsliste

## Seit dem letzten Windows Stand

1. Schrift: VIF1 DIRECT Bilddaten über einen späteren DIRECT (TTE Ketten). Dialogtext korrekt.
2. IPU: echter Dekoder in `ps2xRuntime/src/lib/ipu` (aus ps2-web-recomp, MIT; VLC Tabellen aus Play!,
   BSD-2; Lizenzen in `NOTICE`). DMA Kanal 3/4, Interleave für fromSPR/toSPR, sceDmaRecvN/RecvI,
   sceIpuInit findet die IQ Tabellen per Signatur (Onimusha 0x402A10).
3. GS SIGNAL Interrupt synchron (`EeScheduler::runIrqHandlersNow`), danach liest die laufende DMA
   Kette ihre REF Daten neu. Das Intro dekodiert pro SIGNAL einen 512x16 Streifen (0x3BFC80).
4. SuspendThread, ResumeThread, WakeupThread, ReleaseWaitThread geben bei Erfolg die Thread ID zurück
   (vorher 0). CRI ADX prüft `ResumeThread(t) == t`, sonst schläft der ADX Server Thread für immer und
   Sofdec öffnet die Videodatei nie.
5. PMFHL.LW/UW/SLW (`ps2_runtime_macros.h`): vorher kamen LO und HI als zwei 64 Bit Hälften heraus,
   richtig ist wortweise LO.w0, HI.w0, LO.w2, HI.w2. Die Soft Float Multiplikation (__muldf3 bei
   0x12E998) holt so ihr 64 Bit Produkt; mit dem Fehler kam 997376 * 0.8 = 0 heraus. Dadurch war die
   Mindestlesegröße des Sofdec Streams 0 und es wurde nie von der Disc gelesen.
   ACHTUNG: diese Header Änderung baut alle Runner Dateien neu (bei mir ca. 30 Minuten).
6. libmpeg läuft jetzt als rekompilierter Spielcode über unsere IPU statt über die fremde HLE: die 11
   sceMpeg Einträge sind aus `stubs` entfernt (`onimusha/config_mpeg.toml`, `onimusha/funcs_mpeg.csv`
   mit fünf zusätzlichen Funktionsgrenzen: 0x10B948 sceMpegAddBs, 0x10BAA8, 0x10BAB8, 0x10BAC8, 0x10BAE0).
   Die fünf neuen Funktionen stehen im Runner am Ende von sub_0010BA28_0x10ba28.cpp, damit die Unity
   Batches gleich bleiben.
7. Recompiler: BLTZ/BGEZ/BLEZ/BGTZ (auch L und AL Varianten) vergleichen jetzt alle 64 Bit
   (`GPR_S64`), vorher nur die unteren 32. libmpeg liest IPU_CMD mit `ld` und prüft BUSY in Bit 63;
   mit dem 32 Bit Vergleich galt ein FDEC Ergebnis wie 0x84020204 als "beschäftigt" und das Video hing.
   Im Runner per sed nachgezogen (3272 Stellen), daher kompletter Rebuild.
8. Debug Hilfen: `PS2X_FUNC_HIST=<vsyncs>` (meistgerufene Funktionen pro Fenster, `PS2X_FUNC_HIST_TOP`),
   `PS2X_CD_LOG_FLOOR=<hex lbn>` und `PS2X_CD_LOG_MAX=<n>` für das CD Lese Log, `PS2X_DUMP_RAM`.

## Wo Sofdec gerade steht (für Codex)

* Videothread: Thread 11, Einsprung 0x2AF2A0. Start über 0x2B01C0 → mwPlyStartFname (0x206198) mit
  Name "6\66.". Status Abfrage 0x2B0470 → mwPlyGetStat (0x2076B8), Wert 1 = Vorbereitung.
* Sofdec Server: MWSFSVR registriert Rückrufe bei SVM (Typ 2 VSync 0x20BF80, Typ 5 Main 0x20BF98,
  Typ 6 Idle 0x20BFE8). Typ 6 läuft im ADX Main Thread 8 (0x233880). mwPlyExecSvrHndl = 0x20C360.
* Stream: ADXSTM adxstmf_stat_exec 0x237E58 öffnet über cvFsOpen (0x243D58, Gerät DVCI, sucht
  \IMAGE\6\66.;1 mit sceCdSearchFile, LSN 0x1A0B68). Leseanforderung in 0x237A30; Mindestgröße
  Feld +0x1C kommt aus 0x206778 (Puffergröße * 0.8 per Soft Float).
* Nächster Prüfpunkt: nach dem PMFHL Fix müssen `[sceCdRead] lbn=0x1a....` Zeilen kommen
  (`PS2X_CD_LOG_FLOOR=1a0000`). Danach dekodiert Sofdec über libmpeg.
* Offener Punkt libmpeg: sceMpegCreate, sceMpegGetPicture und weitere stehen in `config.toml` unter
  `stubs` und laufen über die HLE in `Kernel/Stubs/MPEG.cpp`. Diese HLE stammt von einem anderen Spiel
  (schreibt feste Adressen 0x1717BC und 0x171800, erwartet Daten über sceCdSt/PSS). Für Onimusha ist
  der saubere Weg: diese Namen aus `stubs` nehmen, neu generieren, dann läuft die echte libmpeg des
  Spiels über unsere IPU.

## Bekannte Testergebnisse

201 Tests bestanden. "VU0 macro mappings" braucht instructions.h im Arbeitsordner, der Abbruch in
assertExecutor am Ende passiert auch im unveränderten Upstream e563698.
