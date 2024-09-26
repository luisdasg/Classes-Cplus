#include "BankAccount.h"

int main()
{
	
	string n;
	double b;
	double w;
	double d;
	//1st instance
	cout << "FIRST INSTANCE" << endl;
	cout << "===============" << endl;
	cout << "Enter the name of the account holder: "; 
	cin >> n;  
	cout << "Enter the balance of your account: ";
	cin >> b; 
	BankAccount luis(n, b);
	cout<<"Welcome " << luis.GetName() << endl;
	cout << "Enter the amount of withdraw " << endl;
	cin >> w;
	luis.Withdraw(w);
	cout << "The new balance after withdraw is " << luis.GetBalance() << endl;
	cout << "Enter the amount you want to deposit " << endl;
	cin >> d;
	luis.Deposit(d);
	cout << "The new balance after withdraw is " << luis.GetBalance() << endl;
	cout << "END OF FIRST INSTANCE" << endl;
	
	
	//2nd instance
	cout << "SECOND INSTANCE" << endl;
	cout << "===============" << endl;
	cout << "Enter the name of the account holder: ";
	cin >> n;
	BankAccount luis2(n);
	cout << "Your initial balance is " << luis2.GetBalance() << endl;
	cout << "Enter the balance of your account: ";
	cin >> b;
	luis2.setBalance(b);
	cout << "Your initial balance is "<< luis2.GetBalance() << endl;
	cout << "Enter the amount of withdraw " << endl;
	cin >> w;
	luis2.Withdraw(w);
	cout << "Your balance after withdraw is " << luis2.GetBalance() << endl;
	cout << "Enter the amount you want to deposit " << endl;
	cin >> d;
	luis2.Deposit(d);
	cout << "Your new balance after deposit is " << luis2.GetBalance() << endl;
	cout << "END OF THE SECOND INSTANCE" << endl;

	

}
