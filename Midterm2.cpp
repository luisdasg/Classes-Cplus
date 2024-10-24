#include <iostream>
using namespace std;
int main()
{
	int a = 12;
	while (a >= 1)
	{
		int i = 12;
		cout << "The table of " << (a+1) - 1 << endl;
		cout << "===================" << endl;
		while (i >= 1)
		{
			cout << a << " x " << i << " = " << a * i << endl;
			i--;
		}
		cout << endl;
		a--;
	}
	
}