#include <iostream>
using namespace std;

double CalcCirArea(double, double);

int main()
{
	double radius;
	const double pi=3.1416; // const is a constant which means is alw the same
	double area;
	cout << "Enter the radius of the circle -> ";
	cin >> radius;
	area = CalcCirArea(pi,radius);
	cout << "\nThe area of the circle is = " << area << endl;


}

double CalcCirArea(double p, double r)
{
	double a = p * (r * r);
	return a;

}