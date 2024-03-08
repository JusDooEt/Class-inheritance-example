/*************************************************
* Program: HW_6 - Rectangle.h
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
	double width;
	double length;

public:
	Rectangle(double length, double width);
	~Rectangle();

	virtual double calcArea();
};

