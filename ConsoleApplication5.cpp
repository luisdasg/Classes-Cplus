#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int randN;
	int guessN;
	srand(time(NULL));
	randN = rand() % 10;
	//cout << "This is the random number ===> " << randN << endl;
	cout << "Guess a Number from 0 - 9 ===> ";
	cin >> guessN;
	if (guessN == randN)
	{
		cout << "Congratulations you got it!!";
	}
	else
	{
		cout << "Try again ";
		cout << "The number was ==> " << randN << endl;
	}
}