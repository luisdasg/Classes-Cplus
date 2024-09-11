#include <iostream>

using namespace std;
int Highest(int, int, int, int, int);
int Lowest(int, int, int, int, int);
int main()
{
	int a, b, c, d, e;
	int k;
	int x;
	int high;
	int low;
	cout << "Enter the first number ===> ";
	cin >> a;
	cout << "Enter the second number ===> ";
	cin >> b;
	cout << "Enter the third number ===> ";
	cin >> c;
	cout << "Enter the fourth number ===> ";
	cin >> d;
	cout << "Enter the fifth number ===> ";
	cin >> e;
	//invoking the funtion for the highest number and lowest number
	k = Highest(a, b, c, d, e);
	x = Lowest(a, b, c, d, e);
	cout << "The highest number is " << k << endl;
	cout << "The Lowest number is " << x << endl;
}
//funtion which determines the highest
int Highest(int n1, int n2, int n3, int n4, int n5)
{
	int high = 0;
	if (n1 > high)
	{
		high = n1;
	}
	if (n2 > high)
	{
		high = n2;
	}
	if (n3 > high)
	{
		high = n3;
	}
	if (n4 > high)
	{
		high = n4;
	}
	if (n5 > high)
	{
		high = n5;
	}
	return high;
}
//function which determines the lowest number
int Lowest(int m1, int m2, int m3, int m4, int m5)
{
	int low = m1;
	if (m1 < low)
	{
		low = m1;
	}
	if (m2 < low)
	{
		low = m2;
	}
	if (m3 < low)
	{
		low = m3;
	}
	if (m4 < low)
	{
		low = m4;
	}
	if (m5 < low)
	{
		low = m5;
	}
	return low;
}