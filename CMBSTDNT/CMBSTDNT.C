#include <stdio.h>
#include <string.h>
#include "student.h"
#include "graduate.h"
#include "undrgrad.h"

#pragma linkage( SOMInitModule, system )
void SOMInitModule( integer4 majorVersion, integer4 minorVersion )
{
   StudentNewClass( majorVersion, minorVersion );
   GraduateStudentNewClass( majorVersion, minorVersion );
   UnderGraduateStudentNewClass( majorVersion, minorVersion );
}

