/*************************************************
* Program: HW_6 - Rectangle.cpp
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#include "Rectangle.h"

Rectangle::Rectangle(double length, double width)
{
	this->length = length;
	this->width = width;
}

Rectangle::~Rectangle() {}

double Rectangle::calcArea()
{
	return length * width;
}
