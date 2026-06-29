@echo off
title C Multi-File Compiler and Runner - Bamboo grass
cls

cd /d "%~dp0"

echo.
echo ===================================================
echo  Compiling mainFile.c and mainFile_add.c...
echo ===================================================

gcc mainFile.c mainFile_add.c -o myProgram.exe

if %ERRORLEVEL% neq 0 (
    echo.
    echo COMPILATION FAILED! Please check the errors above.
    echo.
    pause
    exit /b %ERRORLEVEL%
)


echo  Compilation successful! Running program...
echo ===================================================
echo.

myProgram.exe

echo.
echo ===================================================
echo  Program finished execution.
echo ===================================================
echo.

pause
