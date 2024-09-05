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
	if (f > 90)
	{
		cout << "It is too hot!!!" << endl;
	}
	else if (f > 80)
	{
		cout << "It is hot!!!" << endl;
	}
	else if (f > 65)
	{
		cout << "It is cool!!!" << endl;
	}
	else if (f > 45)
	{
		cout << "It is chill!!!" << endl;
	}
	else
	{
		cout << "It is frozen" << endl;
	}

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

