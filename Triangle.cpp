#include "Triangle.h"

Triangle::Triangle(double h, double b)
{
	this->height = h;
	this->base = b;

}

Triangle::Triangle()
{
	this->height = 0;
	this->base = 0;

}

void Triangle::CalcArea()
{
	this->area = (this->height * this->base) / 2;

}

double Triangle::getArea()
{
	return this->area;
}

void Triangle::setHeight(double h)
{
	this->height = h;
}

void Triangle::setBase(double b)
{
	this->base = b;
}
void Triangle::setValues(double h, double b)
{
	this->height = h;
	this->base = b;
}