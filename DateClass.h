#include <iostream>
#include <string>
using namespace std;
class DateClass
{
private:
	int month;
	int day;
	int year;
	string MonthName();
public:
	DateClass(int, int, int);
	void PrintMonth();
};

