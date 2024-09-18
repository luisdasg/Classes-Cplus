#include "CalcExp.h"

void CalcExp::setValues(double totm, double gp, double mpg, double parkf, double tollsf)
{
	this->TotMiles = totm;
	this->GasPrice = gp;
	this->MilesPerGallon = mpg;
	this->ParkFees = parkf;
	this->TollsFees = tollsf;
}
void CalcExp::CalcTotGallons()
{
	this->TotGallons = this->TotMiles / this->MilesPerGallon;
}
void CalcExp::CalcGasExp()
{
	this->TotGasExp = this->TotGallons * this->GasPrice;
}
void CalcExp::CalcTotExpense()
{
	this->TotExpense = this->TotGasExp + this->ParkFees + this->TollsFees;

}
double CalcExp::getTotMiles()
{
	return this->TotMiles;
}
double CalcExp::getGasPrice()
{
	return this->GasPrice;

}
double CalcExp::getMPG()
{
	return this->MilesPerGallon;
}
double CalcExp::getTotGallons()
{
	return this->TotGallons;
}
double CalcExp::getTotGasPrice()
{
	return this->TotGasExp;
}
double CalcExp::getTotExpense()
{
	return this->TotExpense;
}