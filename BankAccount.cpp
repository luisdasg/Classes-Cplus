#include "BankAccount.h"

BankAccount::BankAccount(string n)
{
	this->Name = n;
	this->Balance = 0;
}
BankAccount::BankAccount(string n, double b)
{
	this->Name = n;
	this->Balance = b;
}
void BankAccount::Withdraw(double w)
{

	if (w > this->Balance)
	{
		cout << "You don't have that quantity of money." << endl;
		
	}

	else if (w > 500)
	{
		cout << "You cant withdraw more than 500$" << endl;
	}
	else
	{
		this->Balance = this->Balance - w;
		cout << "Withdraw successful, your new balance is: " << this->Balance << endl;
	}
}
void BankAccount::Deposit(double dep)
{
	if (dep >= 1000)
	{
		cout << "You cannot deposit more than 1000$, go to the office." << endl;
		return;
	}
	if (dep <= 1000)
	{
		this->Balance = this->Balance + dep;
		cout << "Deposit successful your new balance is: " << this->Balance << endl;
	}
}
void BankAccount::setBalance(double b)
{
	this->Balance = b;
}
double BankAccount::GetBalance()
{
	return this->Balance;
}
std::string BankAccount::GetName()
{
	return this->Name;
}