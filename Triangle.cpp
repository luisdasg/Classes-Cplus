#include "Triangle.h"
#include <iostream>

Triangle::Triangle(double height, double base)
{
	this->height =height;
	this->base=base;
}
void Triangle::CalcArea()
{
	this->area = (this->height * this->base) / 2;
}
double Triangle::getArea()
{
	return this->area;
}