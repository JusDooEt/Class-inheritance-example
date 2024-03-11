/*************************************************
* Program: HW_6 - Triangle.h
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#pragma once
#include "Shape.h"
class Triangle : public Shape
{
private:
	double base;
	double height;

public:
	Triangle(double base, double height);
	~Triangle();
	virtual double calcArea();
};

