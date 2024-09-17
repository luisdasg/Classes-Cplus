#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
	//instance 1
	Triangle luis(25, 10);
	luis.CalcArea();
	cout << "The area is ===> " << luis.getArea() << endl;
	//instance 2
	Triangle luis2;
	//luis.setHeight(40);
	//luis.setBase(15;
	luis2.setValues(40, 15);
	luis2.CalcArea();
	cout << "The area 2 is ===> " << luis2.getArea() << endl;

}