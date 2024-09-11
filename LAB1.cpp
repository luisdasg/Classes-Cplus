#include <iostream>

using namespace std;
int main()
{
	int a, b, c, d, e;
	int highest, lowest;
	cout << "Enter a positive integer for a ===> ";
	cin >> a;
	cout << "Enter a positive integer for b ===> ";
	cin >> b;
	cout << "Enter a positive integer for c ===> ";
	cin >> c;
	cout << "Enter a positive integer for d ===> ";
	cin >> d;
	cout << "Enter a positive integer for e ===> ";
	cin >> e;

	highest = 0;
	lowest = a;

	if (a > highest)
	{
		highest = a;
	}
	if (b > highest)
	{
		highest = b;
	}
	if (c > highest)
	{
		highest = c;
	}
	if (d > highest)
	{
		highest = d;
	}
	if (e > highest)
	{
		highest = e;
	}
	cout << "The highest number is " << highest << endl;
	if (a < lowest)
	{
		lowest = a;
	}
	if (b < lowest)
	{
		lowest = b;
	}
	if (c < lowest)
	{
		lowest = c;
	}
	if (d < lowest)
	{
		lowest = d;
	}
	if (e < lowest)
	{
		lowest = e;
	}
	cout << "The lowest number is " << lowest << endl;
}