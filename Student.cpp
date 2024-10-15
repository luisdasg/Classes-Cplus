#include "Student.h"

Student::Student(string n)
{
	this->name = n;
}
void Student::AddGrade(double g)
{
	this->TotalGrade += g; //acumulator
}
double Student::CalcAverage()
{
	return	this->TotalGrade / 10;
}
string Student::getLetterGrade(double g)
{
	this->TotalGrade = g;
	if (g >= 100)
	{
		return "A+";
	}
	if (g >= 93 and g<100)
	{
		return "A";
	}
	if (g >= 90 and g < 93)
	{
		return "A-";
	}
	if (g >= 87 and g < 90)
	{
		return "B+";
	}
	if (g >= 83 and g < 87)
	{
		return "B";
	}
	if (g >= 80 and g < 83)
	{
		return "B-";
	}
	if (g >= 77 and g < 80)
	{
		return "C+";
	}
	if (g >= 73 and g < 77)
	{
		return "C";
	}
	if (g >= 70 and g < 73)
	{
		return "C-";
	}
	if (g >= 67 and g < 70)
	{
		return "D+";
	}
	if (g >= 63 and g < 67)
	{
		return "D";
	}
	if (g >= 60 and g < 63)
	{
		return "D-";
	}
	if (g < 60)
	{
		return "F";
	}

}