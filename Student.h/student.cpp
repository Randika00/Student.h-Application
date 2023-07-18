#include "StdAfx.h"
#include "Student.h"
#include <string.h>


Student::Student(void)
{
    studentID = 0;
    strcpy(studentName," ");
    marksOOC = 0; 
    marksSPM = 0 ; 
    marksISDM = 0 ; 
}


Student::~Student(void)
{

}
Student::Student(int no, char name[50])
{
  studentID = no;
  strcpy_s(studentName,name);

}
void Student::setMarksOOC(int m)
{
   marksOOC = m;
}
int Student::getMarksOOC()
{
	return marksOOC;
}
void Student::setMarksSPM(int m)
{
	marksSPM = m;
}
int Student::getMarksSPM()
{
	return marksSPM;
}
void Student::setMarksISDM(int m)
{
    marksISDM = m;
}
int Student::getMarksISDM()
{
	return marksISDM;
}`