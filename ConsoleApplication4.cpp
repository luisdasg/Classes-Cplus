#include <iostream>
using namespace std;

void PrintTitle();
double FtoC(double);


int main() {
	double f;
	double c;
	PrintTitle();
	cout << "Enter the temp in F ---> ";
	cin >> f;
	c = FtoC(f);
	cout << "\nThe temperature in celsius is ---> " << c << endl;

}

double FtoC(double gust)
{
	double alatta = (gust - 32) * 5 / 9;
	return alatta;
}

void PrintTitle()
{
	cout << "Temperature Conversion App\n";
	cout << "============================";
}