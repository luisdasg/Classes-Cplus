#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
	Triangle luis(25, 10);
	luis.CalcArea();
	cout << "The area is ==> " << luis.getArea() << endl;


	Triangle gust(10, 5);
	gust.CalcArea();
	cout << "The area is ==> " << gust.getArea() << endl;


}
