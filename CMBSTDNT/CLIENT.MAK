# IBM Developer's Workframe/2 Make File Creation run at 16:50:31 on 04/12/92

# Make File Creation run in directory:
#   D:\RANDY\STUDENT;

.SUFFIXES:

.SUFFIXES: .c

client.exe:  \
  CLIENT.OBJ
# CLIENT.MAK
   @REM @<<CLIENT.@0
     /CO /PM:VIO +
     CLIENT.OBJ
     client.exe

     som.lib+cmbstdnt.lib
     ;
<<
   LINK386.EXE @CLIENT.@0

{.}.c.obj:
   ICC.EXE /Ss /Ti /C .\$*.c

!include CLIENT.DEP
