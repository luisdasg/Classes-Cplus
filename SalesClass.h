#pragma once
#include <iostream>
using namespace std;
class SalesClass
{
private:
	string StoreName;
	double TotalSales=0; //acumulator is initialize with 0

public:
	SalesClass(string);
	void SalesAcum(double);
	double CalcAverage(int);
	string getStoreName();
	double getTotalSales();
};

