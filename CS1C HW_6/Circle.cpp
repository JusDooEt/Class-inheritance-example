/*************************************************
* Program: HW_6 - Circle.cpp
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#include "Circle.h"

Circle::Circle(double radius)
{
	this->radius = radius;
}

Circle::~Circle() {}

double Circle::calcArea()
{
	return M_PI * pow(radius, 2);
}