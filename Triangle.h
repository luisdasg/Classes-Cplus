#pragma once
class Triangle
{
private:
	double height;
	double base;
	double area;
public:
	
	Triangle(double, double);
	Triangle();
	void CalcArea();
	double getArea();
	void setHeight(double);
	void setBase(double);
	void setValues(double, double);
};

