/*************************************************
* Program: HW_6 - Shape.h
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#pragma once

#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>
#include <array>

using namespace std;

class Shape
{
public:
	Shape();
	~Shape();

	virtual double calcArea() = 0;
};

