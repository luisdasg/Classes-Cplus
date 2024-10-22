#include <iostream>
using namespace std;
int main()
{
	cout << "The multiplication tables" << endl;
	cout << "=========================" << endl;
	for (int x = 10; x >0; x--)
	{
		cout << "The table of " << x << endl;
		cout << "==============" << endl << endl;
		for (int b = 10; b >0; b--)
		{
			cout << x << " x " << b << " = " << b * x << endl;
		}
		cout << endl;
	}
}