
/*
 * This file was generated by the SOM Compiler.
 * FileName: .\STUDENT.h.
 * Generated using:
 *     SOM Precompiler spc: 1.22
 *     SOM Emitter emith: 1.11
 */

#ifndef STUDENT_h
#define STUDENT_h


#include <som.h>

/*
 * Define the class name as an object type
 */
#ifndef Student
#define Student SOMAny
#endif
#include <somobj.h>

#define Student_MajorVersion 1
#define Student_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define StudentNewClass c
#pragma linkage(c, system)
#define StudentClassData d
#define StudentCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define Student_classObj StudentClassData.classObject
#define _Student Student_classObj

/*
 * New and Renew macros for Student
 */
#define _StudentNew() (_somNew(StudentClassData.classObject))
#define StudentNew() \
	( StudentClassData.classObject \
		? _StudentNew() \
		: ( StudentNewClass(Student_MajorVersion, Student_MinorVersion), _StudentNew() ) )
#define StudentRenew(buf) \
	( _somRenew(StudentClassData.classObject, buf) )

/*
 * Override method: somInit
 */
#define Student_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * New Method: setUpStudent
 */
typedef void    SOMLINK somTP_Student_setUpStudent(Student *somSelf,
		char *id,
		char *name);
#pragma linkage(somTP_Student_setUpStudent, system)
typedef somTP_Student_setUpStudent *somTD_Student_setUpStudent;
#define somMD_Student_setUpStudent "----"
#define Student_setUpStudent(somSelf,id,name) \
    (SOM_Resolve(somSelf, Student, setUpStudent) \
	(somSelf,id,name))
#define _setUpStudent Student_setUpStudent

/*
 * New Method: printStudentInfo
 */
typedef void    SOMLINK somTP_Student_printStudentInfo(Student *somSelf);
#pragma linkage(somTP_Student_printStudentInfo, system)
typedef somTP_Student_printStudentInfo *somTD_Student_printStudentInfo;
#define somMD_Student_printStudentInfo "----"
#define Student_printStudentInfo(somSelf) \
    (SOM_Resolve(somSelf, Student, printStudentInfo) \
	(somSelf))
#define _printStudentInfo Student_printStudentInfo

/*
 * New Method: getStudentType
 */
typedef char *   SOMLINK somTP_Student_getStudentType(Student *somSelf);
#pragma linkage(somTP_Student_getStudentType, system)
typedef somTP_Student_getStudentType *somTD_Student_getStudentType;
#define somMD_Student_getStudentType "----"
#define Student_getStudentType(somSelf) \
    (SOM_Resolve(somSelf, Student, getStudentType) \
	(somSelf))
#define _getStudentType Student_getStudentType

/*
 * New Method: getStudentID
 */
typedef char *   SOMLINK somTP_Student_getStudentID(Student *somSelf);
#pragma linkage(somTP_Student_getStudentID, system)
typedef somTP_Student_getStudentID *somTD_Student_getStudentID;
#define somMD_Student_getStudentID "----"
#define Student_getStudentID(somSelf) \
    (SOM_Resolve(somSelf, Student, getStudentID) \
	(somSelf))
#define _getStudentID Student_getStudentID

/*
 * New Method: SetStudentGPA
 */
typedef void    SOMLINK somTP_Student_SetStudentGPA(Student *somSelf,
		int GPA);
#pragma linkage(somTP_Student_SetStudentGPA, system)
typedef somTP_Student_SetStudentGPA *somTD_Student_SetStudentGPA;
#define somMD_Student_SetStudentGPA "----"
#define Student_SetStudentGPA(somSelf,GPA) \
    (SOM_Resolve(somSelf, Student, SetStudentGPA) \
	(somSelf,GPA))
#define _SetStudentGPA Student_SetStudentGPA

/*
 * New Method: GetStudentGPA
 */
typedef int    SOMLINK somTP_Student_GetStudentGPA(Student *somSelf);
#pragma linkage(somTP_Student_GetStudentGPA, system)
typedef somTP_Student_GetStudentGPA *somTD_Student_GetStudentGPA;
#define somMD_Student_GetStudentGPA "----"
#define Student_GetStudentGPA(somSelf) \
    (SOM_Resolve(somSelf, Student, GetStudentGPA) \
	(somSelf))
#define _GetStudentGPA Student_GetStudentGPA

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMAny * SOMLINK StudentNewClass(integer4 scemajorVersion,
		integer4 sceminorVersion);
#pragma linkage(StudentNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct StudentClassDataStructure {
	SOMAny *classObject;
	somMToken setUpStudent;
	somMToken printStudentInfo;
	somMToken getStudentType;
	somMToken getStudentID;
	somMToken SetStudentGPA;
	somMToken GetStudentGPA;
} StudentClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct StudentCClassDataStructure {
	somMethodTab *parentMtab;
	somDToken instanceDataToken;
} StudentCClassData;

#endif       /* STUDENT_h */

/*
 * This file was generated by the SOM Compiler.
 * FileName: .\STUDENT.h.
 * Generated using:
 *     SOM Precompiler spc: 1.22
 *     SOM Emitter emith: 1.11
 */

#ifndef STUDENT_mh
#define STUDENT_mh


/*
 * Define the class name as an object type
 */
#ifndef M_Student
#define M_Student SOMAny
#endif

#define M_Student_MajorVersion 1
#define M_Student_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_StudentNewClass c
#pragma linkage(c, system)
#define M_StudentClassData d
#define M_StudentCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_Student_classObj M_StudentClassData.classObject
#define _M_Student M_Student_classObj

/*
 * New and Renew macros for M_Student
 */
#define _M_StudentNew() (_somNew(M_StudentClassData.classObject))
#define M_StudentNew() \
	( M_StudentClassData.classObject \
		? _M_StudentNew() \
		: ( M_StudentNewClass(M_Student_MajorVersion, M_Student_MinorVersion), _M_StudentNew() ) )
#define M_StudentRenew(buf) \
	( _somRenew(M_StudentClassData.classObject, buf) )

/*
 * Override method: somInit
 */
#define M_Student_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: somNew
 */
#define M_Student_somNew(somSelf) \
	SOMClass_somNew(somSelf)

/*
 * New Method: countObjects
 */
typedef int    SOMLINK somTP_M_Student_countObjects(M_Student *somSelf);
#pragma linkage(somTP_M_Student_countObjects, system)
typedef somTP_M_Student_countObjects *somTD_M_Student_countObjects;
#define somMD_M_Student_countObjects "----"
#define M_Student_countObjects(somSelf) \
    (SOM_Resolve(somSelf, M_Student, countObjects) \
	(somSelf))
#define _countObjects M_Student_countObjects

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMAny * SOMLINK M_StudentNewClass(integer4 scemajorVersion,
		integer4 sceminorVersion);
#pragma linkage(M_StudentNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_StudentClassDataStructure {
	SOMAny *classObject;
	somMToken countObjects;
} M_StudentClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_StudentCClassDataStructure {
	somMethodTab *parentMtab;
	somDToken instanceDataToken;
} M_StudentCClassData;

#endif       /* STUDENT_h */
