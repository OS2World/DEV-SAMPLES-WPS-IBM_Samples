# IBM Developer's Workframe/2 Make File Creation run at 13:35:10 on 08/05/92

# Make File Creation run in directory:
#   K:\SRC\MICRO;

.SUFFIXES:

.SUFFIXES: .c

console.exe:  \
  console.OBJ \
  CONSOLE.MAK
   @REM @<<CONSOLE.@0
     /NOI /PM:VIO +
     console.OBJ
     console.exe
     
     micro som
     ;
<<
   LINK386.EXE @CONSOLE.@0

{.}.c.obj:
   ICC.EXE /Ss /C .\$*.c

!include CONSOLE.DEP
