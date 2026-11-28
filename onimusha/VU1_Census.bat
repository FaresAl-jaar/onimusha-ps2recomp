@echo off
rem Records the VU1 microprograms that have no translated code yet, into the vu1_census folder.
rem Play normally through the slow scenes, then close the game and send the folder.
cd /d "%~dp0"
set "PS2X_VU1_CENSUS=%~dp0vu1_census"
start "" OnimushaLauncher.exe
