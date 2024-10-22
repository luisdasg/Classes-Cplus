#include "Greetings.h"

Greetings::Greetings(string n, int y)
{
	this->name = n;
	this->YOB = y;
}
string Greetings::BuildMessage()
{
	string message = "Welcome, " + this->name + " you are " + to_string(2024 - this->YOB) + " years old.";
	return message;
}
void Greetings::PrintMessage()
{
	cout << this->BuildMessage() << endl;
}