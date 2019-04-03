include <student.sc>

class:
   GraduateStudent,
   major version = 1,
   minor version = 1;

parent:
   Student;

data:
   char thesis[128];    /* thesis title         */
   char degree[16];     /* graduate degree type */

methods:
   override printStudentInfo;
   override getStudentType;
   void     setUpGraduateStudent( char *id, char *name,
                                  char *thesis, char *degree );
