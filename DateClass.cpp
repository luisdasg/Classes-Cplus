#include "DateClass.h"

DateClass::DateClass(int d, int m, int y)
{
	this->day = d;
	this->month = m;
	this->year = y;
}
string DateClass::MonthName()
{
	if (this->month == 1)
	{
		return "January";
	}
	if (this->month == 2)
	{
		return "February";
	}
	if (this->month == 3)
	{
		return "March";
	}
	if (this->month == 4)
	{
		return "April";
	}
	if (this->month == 5)
	{
		return "May";
	}
	if (this->month == 6)
	{
		return "June";
	}
	if (this->month == 7)
	{
		return "July";
	}
	if (this->month == 8)
	{
		return "August";
	}
	if (this->month == 9)
	{
		return "September";
	}
	if (this->month == 10)
	{
		return "October";
	}
	if (this->month == 11)
	{
		return "November";
	}
	if (this->month == 12)
	{
		return "December";
	}
	
}
void DateClass::PrintMonth()
{
	cout << "You entered: " + MonthName() + " " + to_string(this->day) + ", " + to_string(this->year) << endl;
}