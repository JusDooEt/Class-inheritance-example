/*************************************************
* Program: HW_6 - Triangle.cpp
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#include "Triangle.h"

Triangle::Triangle(double base, double height)
{
	this->base = base;
	this->height = height;

}

Triangle::~Triangle() {}

double Triangle::calcArea()
{
	return (base * height) / 2;
}
