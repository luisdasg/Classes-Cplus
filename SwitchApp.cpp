#include <stdlib.h>
#include <iostream>
using namespace std;
void CalcRectArea()
{
	cout << "Calculate Rectangle Area\n";
	cout << "=========================\n\n";
	double l, w;
	cout << "Enter the rectangle length ====> ";
	cin >> l;
	cout << "Enter the rectangle witdh ====> ";
	cin >> w;
	cout << "The rectangle area is = " << (l * w) << endl;
	system("pause");
	system("cls");
}
void CalcTriArea()
{
	cout << "Calculate Triangle Area\n";
	cout << "=========================\n\n";
	double b, h;
	cout << "Enter the triangle base ====> ";
	cin >> b;
	cout << "Enter the triangle height witdh ====> ";
	cin >> h;
	cout << "The triangle area is = " << ((b * h)/2) << endl;
	system("pause");
	system("cls");
}
void CalcCircleArea()
{
	cout << "Calculate Circle Area\n";
	cout << "=========================\n\n";
	double r;
	cout << "Enter the circle radius ====> ";
	cin >> r;
	cout << "The circle area is = " << (3.14*(r*r)) << endl;
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
		cout << "1. Calculate Rectangle Area\n";
		cout << "2. Calculate Triangle Area\n";
		cout << "3. Calculate Circle Area\n\n";
		cout << "4. To Exit\n\n";
		cout << "Enter your choice ===> ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			CalcRectArea();
			break;
		case 2:
			CalcTriArea();
			break;
		case 3:
			CalcCircleArea();
			break;
		case 4:
			eXit();
			break;
		default:
			xDefault();
			break;
		}
	}
	while (choice != 4);
	
}
