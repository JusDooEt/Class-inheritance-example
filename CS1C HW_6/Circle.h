/*************************************************
* Program: HW_6 - Circle.h
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
	double radius;

public:
	Circle(double radius);
	~Circle();

	double calcArea();
};

