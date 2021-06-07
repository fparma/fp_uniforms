@echo off
if not exist "%~dp0"\"/build" mkdir "%~dp0"\"/build"

for /d %%G in ("FP_*") do (
	echo.
	echo Building %%G...
	echo.
	makepbo -p -@=%%G %%G build/%%G || goto error
)

makepbo -p -W -u -@=sim_extra_gear sim_extra_gear build/sim_extra_gear || goto error

echo.
echo Build done, no errors
pause
goto :EOF

:error
echo Failed with error #%errorlevel%.
pause
