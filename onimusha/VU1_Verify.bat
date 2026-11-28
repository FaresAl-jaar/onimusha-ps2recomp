@echo off
rem Runs the translated VU1 code and the interpreter side by side and logs every difference to onimusha.log.
rem Slow on purpose. Play a minute in the scene to check, then close the game.
cd /d "%~dp0"
set "PS2X_VU1_VERIFY=1"
start "" OnimushaLauncher.exe
