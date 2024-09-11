#include <iostream>

using namespace std;
void PrintTitle();
double Calculation(double, double, double, double, double);
int main()
{
	double TotalMiles;
	double CostGallon;
	double MPG;
	double parkingfee;
	double tollsfee;
	PrintTitle();
	cout << "Enter the total miles of your trip ==> ";
	cin >> TotalMiles;
	cout << "Enter the average cost of a gallon of gasoline ===> ";
	cin >> CostGallon;
	cout << "Enter the Mileage Per Gallon of your vehicle ===> ";
	cin >> MPG;
	cout << "Enter how much did you spend in parkings during your trip ===> ";
	cin >> parkingfee;
	cout << "Enter how much did you spend in Tolls during your trip ===> ";
	cin >> tollsfee;
	double everything = Calculation(TotalMiles, CostGallon, MPG, parkingfee, tollsfee);
	cout << "You traveled " << TotalMiles << " miles with the average cost of a gallon of gasoline during your trip was " << CostGallon <<
		"$ your vehicle counts with a Average of " << MPG << " Miles per gallon. Also you spend " << parkingfee << "$ in parking fees and you paid " << tollsfee <<
		"$ in tolls as well.";
	cout << "\nYour total is " << everything << "$ dollars during your trip. Thank you!" << endl;
	
}

double Calculation(double totMiles, double gallon, double avgmpg, double parkings, double tolls)
{
	double first;
	first = (totMiles / avgmpg) * gallon;
	double second;
	second = first + parkings + tolls;
	return second;
}

void PrintTitle()
{
	cout << "Driving cost app made by Luis Sequera\n";
	cout << "=====================================\n";
}