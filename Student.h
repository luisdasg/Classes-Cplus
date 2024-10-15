#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	string name;
	double TotalGrade=0; //acumulator
public:
	string getLetterGrade(double);
	Student(string);
	void AddGrade(double);
	double CalcAverage();
};

