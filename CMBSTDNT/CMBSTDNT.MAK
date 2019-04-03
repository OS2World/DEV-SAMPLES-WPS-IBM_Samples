# IBM Developer's Workframe/2 Make File Creation run at 11:11:54 on 04/23/92

# Make File Creation run in directory:
#   F:\RANDY\SOM\STUDENT;

all:  student.sc \
      graduate.sc \
      undrgrad.sc \
      cmbstdnt.dll

.SUFFIXES: .c .csc

cmbstdnt.dll:  \
  CMBSTDNT.OBJ \
  STUDENT.OBJ \
  GRADUATE.OBJ \
  UNDRGRAD.OBJ \
  cmbstdnt.def
   @REM @<<CMBSTDNT.@0
     /CO +
     CMBSTDNT.OBJ +
     STUDENT.OBJ +
     GRADUATE.OBJ +
     UNDRGRAD.OBJ
     cmbstdnt.dll

     som.lib
     cmbstdnt.def;
<<
   LINK386.EXE @CMBSTDNT.@0
  IMPLIB cmbstdnt.LIB cmbstdnt.def

{.}.csc.sc:
   sc .\$*.csc

{.}.c.obj:
   ICC.EXE /Ss /Ti /Gm /Ge- /C .\$*.c

!include CMBSTDNT.DEP
