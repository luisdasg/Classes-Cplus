#pragma once
class Triangle
{
public :
	double height;
	double base;
	Triangle(double, double);
	void CalcArea();
	double getArea();
private:
	double area;
};

