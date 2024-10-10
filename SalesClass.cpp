#include "SalesClass.h"

SalesClass::SalesClass(string n)
{
	this->StoreName = n;
}
void SalesClass::SalesAcum(double s)
{
	this->TotalSales += s; //accumulator

}
double SalesClass::CalcAverage(int m)
{
	return this->TotalSales / m;
}
string SalesClass::getStoreName()
{
	return this->StoreName;
}
double SalesClass::getTotalSales()
{
	return this->TotalSales;
}