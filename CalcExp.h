#pragma once
class CalcExp
{

private:
	double TotMiles;
	double GasPrice;
	double MilesPerGallon;
	double ParkFees;
	double TollsFees;
	double TotGallons;
	double TotGasExp;
public:
	double TotExpense;
	void setValues(double, double, double, double, double);
	void CalcTotGallons();
	void CalcGasExp();
	void CalcTotExpense();
	double getTotMiles();
	double getGasPrice();
	double getMPG();
	double getTotGallons();
	double getTotGasPrice();
	double getTotExpense();

};

