@echo off
if not exist "%~dp0"\"/build" mkdir "%~dp0"\"/build"

for /d %%G in ("FP_*") do (
	echo.
	echo Building %%G...
	echo.
	makepbo -p %%G build/%%G || goto error
)

echo.
echo Build done, no errors
goto :EOF

:error
echo Failed with error #%errorlevel%.
exit /b %errorlevel%
