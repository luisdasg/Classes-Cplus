#include <iostream>
#include <string>
using namespace std;
class Greetings
{
private:
	string name;
	int YOB;
	string BuildMessage();
public:
	Greetings(string, int);
	void PrintMessage();

};

