#pragma once
class Student
{
private:
	int studentID;
    char studentName[50];
    int marksOOC; 
    int marksSPM; 
    int marksISDM; 
public:
	Student(void);
	Student(int no, char name[50]);
    void setMarksOOC(int m);
    int getMarksOOC();
    void setMarksSPM(int m);
    int getMarksSPM();
    void setMarksISDM(int m);
    int getMarksISDM();
	~Student(void);
};


