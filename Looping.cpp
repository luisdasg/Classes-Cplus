#include <iostream>
using namespace std;
int main()
{
	cout << "The multiplication tables" << endl;
	cout << "=========================" << endl;
	for (int x=1; x<=10; x++)
	{
		cout << "The table of " << x << endl;
		cout << "==============" << endl << endl;
		for (int b=1; b<=10; b++)
		{
			cout << x << " x " << b << " = " << b * x << endl;
		}
		cout << endl;
	}
}
