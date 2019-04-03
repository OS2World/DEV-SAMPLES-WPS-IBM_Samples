#include "student.h"
#include "graduate.h"
#include "undrgrad.h"

SOMEXTERN int MyReplacementForSOMOutChar( char c );
#pragma linkage( MyReplacementForSOMOutChar, system )

main( int argc, char *argv[] )
{

   Student *student1, *student2;
   GraduateStudent *grad1, *grad2, *grad3;
   UnderGraduateStudent *UndrGrad1, *UndrGrad2;
   SOMClass *studentClassObject, *gradStudentClassObject,
            *ugradStudentClassObject;

   // The next line will replace the standard SOMOutCharRoutine
   SOMOutCharRoutine = MyReplacementForSOMOutChar;

   // set the trace level based on input parms
   SOM_TraceLevel = 0;
   if( argc > 1 )                       // user passed in a trace level
      SOM_TraceLevel = atoi( argv[1] );

   if( SOM_TraceLevel ) {


   }

   // create new Student instances
   student1 = StudentNew();
   student2 = StudentNew();

   // create new GraduateStudent instances
   grad1 = GraduateStudentNew();
   grad2 = GraduateStudentNew();
   grad3 = GraduateStudentNew();

   // create new UnderGraduateStudent instances
   UndrGrad1 = UnderGraduateStudentNew();
   UndrGrad2 = UnderGraduateStudentNew();

   // setUpStudent is used to initialize the instances with data
   _setUpStudent( student1, "120455", "Joe Doe" );
   _setUpStudent( student2, "103606", "Mary Smith" );
   _setUpGraduateStudent( grad1, "203230", "Janet Brown",
                          "Parser Generators", "M.S." );
   _setUpGraduateStudent( grad2, "203231", "Neddy Weedlebush",
                          "SOM Compilers", "M.S." );
   _setUpGraduateStudent( grad3, "203232", "Simon Saes",
                          "Why WPS is Wonderful", "Ph.D" );
   _setUpUnderGraduateStudent( UndrGrad1, "203233",
                               "Thom Thumb", "05/31/96" );
   _setUpUnderGraduateStudent( UndrGrad2, "203234",
                               "Tomasina Grinch", "08/31/98" );

   _printStudentInfo( student1 );
   _printStudentInfo( student2 );
   _printStudentInfo( UndrGrad1 );
   _printStudentInfo( UndrGrad2 );
   _printStudentInfo( grad1 );
   _printStudentInfo( grad2 );
   _printStudentInfo( grad3 );

    // display student class data
   studentClassObject = _somGetClass( student1 );
   printf( "\n\nstudent1 class object is of <%s> class\n",
           _somGetClassName( studentClassObject ) );
   printf( "Student count: %d\n", _countObjects( studentClassObject ) );

    // display Graduate student class data
   gradStudentClassObject = _somGetClass( grad1 );
   printf( "grad1 class object is of <%s> class\n",
           _somGetClassName( gradStudentClassObject ) );
   printf( "Grad Student count: %d\n", _countObjects( gradStudentClassObject ) );

    // display UnderGraduate student class data
   ugradStudentClassObject = SOM_GetClass( UndrGrad1 );
   printf( "UndrGrad1 class object is of <%s> class\n",
           _somGetClassName( ugradStudentClassObject ) );
   printf( "UnderGrad Student count: %d\n",
            _countObjects( ugradStudentClassObject ) );
}

SOMEXTERN int MyReplacementForSOMOutChar( char c )
{
   printf("%c", c );
}
