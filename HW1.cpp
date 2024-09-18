#include <iostream>
#include "CalcExp.h"
using namespace std;

int main()
{
	//instance 1
	CalcExp luis;
	luis.setValues(100, 3.55, 25, 10, 4);
	luis.CalcTotGallons();
	luis.CalcGasExp();
	luis.CalcTotExpense();
	cout << "The total expense is ---> " << luis.getTotExpense() << endl;
}