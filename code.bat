@echo off
setlocal EnableDelayedExpansion

net session >nul 2>&1
if %errorlevel% neq 0 (
    echo [!] Not running as Administrator.
    echo [+] Requesting elevated window...
    powershell -NoProfile -ExecutionPolicy Bypass -Command "Start-Process cmd -ArgumentList '/k cd /d ""%~dp0"" && ""%~f0""' -Verb RunAs"
    exit /b
)

title MinGW64 Automated Installer (ADMIN) - Bamboo grass
color 0B

set "SCRIPT_DIR=%~dp0"
set "SOURCE_MINGW=%SCRIPT_DIR%mingw64"
set "TARGET_DIR=%ProgramFiles:~0,2%\mingw64"

echo ========================================================
echo RUNNING WITH ADMINISTRATOR PRIVILEGES
echo ========================================================
echo Source Path: %SOURCE_MINGW%
echo Target Path: %TARGET_DIR%
echo.

if not exist "%SOURCE_MINGW%" (
    color 0C
    echo Error: Could not find source folder next to this script.
    echo Expected: %SOURCE_MINGW%
) else (
    echo Source folder verified.
)
echo.

if not exist "%TARGET_DIR%" (
    echo Copying MinGW to local disk C:\... This may take a minute...
    xcopy "%SOURCE_MINGW%" "%TARGET_DIR%" /E /I /H /Y >nul
    echo Copy complete!
) else (
    echo Target folder already exists on C:\. Skipping copy.
)
echo.

echo Updating System PATH safely...

powershell -NoProfile -ExecutionPolicy Bypass -Command ^
    "$targetBin = 'C:\mingw64\bin';" ^
    "$regPath = 'HKCU:\Environment';" ^
    "$current = (Get-ItemProperty -Path $regPath -Name Path -ErrorAction SilentlyContinue).Path;" ^
    "if (-not $current) { $current = '' };" ^
    "$entries = $current -split ';' | Where-Object { $_ -ne '' };" ^
    "if ($entries -contains $targetBin) {" ^
    "    Write-Host 'C:\mingw64\bin is already in your User PATH. No changes made.';" ^
    "} else {" ^
    "    $newPath = ($entries + $targetBin) -join ';';" ^
    "    Set-ItemProperty -Path $regPath -Name Path -Value $newPath -Type ExpandString;" ^
    "    [System.Environment]::SetEnvironmentVariable('Path', $newPath, 'User');" ^
    "    Write-Host 'Successfully added C:\mingw64\bin to your User PATH!';" ^
    "}"
    
echo.
echo ========================================================
echo SETUP COMPLETE! You can close this window now.
echo ========================================================
echo.
chcp 65001 > nul
echo © 2026 bamboo grass
echo.

::start cmd
::exit

pause
