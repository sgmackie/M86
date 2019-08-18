@echo off

:: Set file names
set Name=Chapter2_01

:: Build assembly file as an .obj
nasm -f win64 -g -O0 %Name%.asm

:: Set compiler flags
set CompilerFlags=-g -gcodeview -pedantic 

:: Set warning labels:
set WarningFlags=-Wall -Werror

:: Optimisation level
set OptimiserFlags=-O0

clang %CompilerFlags% %WarningFlags% %OptimiserFlags% %Name%.cpp %Name%.obj -o %Name%.exe