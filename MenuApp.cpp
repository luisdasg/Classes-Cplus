#include <iostream>
#include <stdlib.h>
using namespace std;

void gmSpanish()
{
	cout << "\nBuenos Dias!!!\n";
	system("pause");
	system("cls");

}
void gmPortuguese()
{
	cout << "\nBom Dia!!!\n\n";
	system("pause");
	system("cls");
}
void gmItalian()
{
	cout << "\nBon Giorno!!!\n\n";
	system("pause");
	system("cls");
}
void eXit()
{
	cout << "\nThanks for using this Application!!!\n\n";
	system("pause");
	system("cls");
}
void xDefault()
{
	cout << "\nWrong choice!!!\n\n";
	system("pause");
	system("cls");
}
int main()
{
	int choice;
	do
	{
		cout << "Menu of Options\n";
		cout << "=================\n\n";
		cout << "1. Say Goodmorning in Spanish\n";
		cout << "2. Say Goodmorning in Portuguese\n";
		cout << "3. Say Goodmorning in Italian\n\n";
		cout << "4. To Exit\n\n";
		cout << "Enter your choice ===> ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			gmSpanish();
			break;
		case 2:
			gmPortuguese();
			break;
		case 3:
			gmItalian();
			break;
		case 4:
			eXit();
			break;
		default:
			xDefault();
			break;
		}
	} while (choice != 4);
}
