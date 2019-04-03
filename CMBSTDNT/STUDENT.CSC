include <somobj.sc>

class:
   Student,
   classprefix = StudentClass_,
   major version = 1,
   minor version = 1,
   global;

-- "Student" class provides a base class to generate more
-- specialized students like "GraduateStudent" and
-- "UnderGraduateStudent".

parent:
   SOMObject;

release order:
    setUpStudent, printStudentInfo, getStudentType,
    getStudentID, SetStudentGPA, GetStudentGPA, countObjects;

data:
   char id[16];      /* student id */
   char name[32];    /* student name */
   int  GPA;         /* grade point avg */
   int  count, class;

methods:
   group: Overrides;
      override somInit;

   group: StudentMethods;
      void setUpStudent( char *id, char *name );
      -- sets up a new student

      void printStudentInfo();
      -- prints the student information

      char *getStudentType();
      char *getStudentID();

      void SetStudentGPA( int GPA );
      int  GetStudentGPA();

   group: ClassMethods;
      override somInit, class;
      override somNew, class;
      int      countObjects(), class;
