// IT20225988.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	Student s1(1234 , "Kamal" );
	s1.setMarksOOC(85);
	s1.setMarksSPM(80);
	s1.setMarksISDM(75);

	Student s2 = Student(4567 , "Saman" );
	s2.setMarksOOC(65);
	s2.setMarksSPM(50);
	s2.setMarksISDM(45);

	Student s3 = Student(7891 , "Nimal" );
	s3.setMarksOOC(98);
	s3.setMarksSPM(75);
	s3.setMarksISDM(80);

	Student s4 = Student(1212 , "Sunil" );
	s4.setMarksOOC(35);
	s4.setMarksSPM(60);
	s4.setMarksISDM(40);
	
	float avgooc , avgspm , avgisdm;

	avgooc = (s1.getMarksOOC() + s2.getMarksOOC() + s3.getMarksOOC() + s4.getMarksOOC())/4.0 ;
	avgspm = (s1.getMarksSPM() + s2.getMarksSPM() + s3.getMarksSPM() + s4.getMarksSPM())/4.0 ;
	avgisdm = (s1.getMarksISDM() + s2.getMarksISDM() + s3.getMarksISDM() + s4.getMarksISDM())/4.0 ;

	cout<<"Average OOC Mark :"<<avgooc<<endl;
	cout<<"Average SPM Mark :"<<avgspm<<endl;
	cout<<"Average ISDM Mark :"<<avgisdm<<endl;

	char ch;
	cin>>ch;


	return 0;
}