#include <iostream>

using namespace std;
int main()
{
	int a, b, c;
	int highest, lowest;
	cout << "Enter a positive integer for a ===> ";
	cin >> a;
	cout << "Enter a positive integer for b ===> ";
	cin >> b;
	cout << "Enter a positive integer for c ===> ";
	cin >> c;
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
	cout << "The lowest number is " << lowest << endl;
}