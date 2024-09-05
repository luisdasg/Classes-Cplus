#include <iostream>
using namespace std;

int main()

{
	int hours;
	double payrate;
	double payment;
	cout << "Payroll App Ver 2.0" << endl;
	cout << "===================" << endl << endl;
	cout << "Enter the hours worked as an Integer ===> ";
	cin >> hours;
	cout << "Enter your payrate ===> ";
	cin >> payrate;
	payment = hours * payrate;
	cout << "\nYour payment is = " << payment << endl;
	
}