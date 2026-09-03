#include <iostream>
using namespace std;


int main()
{
    int amount;
    int reminder;
    int dollars;
    cin >> amount;
    cout << "Amount entered: " << amount << endl;
    if (amount >= 100) {
		dollars = amount / 100;
		if (dollars > 1) {
			cout << dollars << " Dollars" << endl;
		}
		else {
			cout << dollars << " Dollar" << endl;
		}
		reminder = amount % 100;
    }
	reminder = amount % 100;
    if (reminder >= 25) {
		int quarters = reminder / 25;
		if (quarters > 1) {
			cout << quarters << " Quarters" << endl;
		}
		else {
			cout << quarters << " Quarter" << endl;
		}
		reminder = reminder % 25;
    }
    reminder = reminder % 25;
    if (reminder >= 10) {
		int dimes = reminder / 10;
		if (dimes > 1) {
			cout << dimes << " Dimes" << endl;
		}
		else {
			cout << dimes << " Dime" << endl;
		}
		reminder = reminder % 10;
    }
	reminder = reminder % 10;
	if (reminder >= 5) {
		int nickels = reminder / 5;
		if (nickels > 1) {
			cout << nickels << " Nickels" << endl;
		}
		else {
			cout << nickels << " Nickel" << endl;
		}
		reminder = reminder % 5;
	}
	reminder = reminder % 5;
	if (reminder >= 1) {
		int pennies = reminder / 1;
		if (pennies > 1) {
			cout << pennies << " Pennies" << endl;
		}
		else {
			cout << pennies << " Penny" << endl;
		}
		reminder = reminder % 1;
	}
	if (reminder == 0 || reminder < 0) {
		cout << "No remaining amount." << endl;
	}
	return 0;
    
}