/*************************************************
* Program: HW_6 - Source.cpp
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/

#include "Shape.h"

char ShapeMenu();
bool ValidateChar(char selection, char validChoices[], int ArSize);

int main()
{
	// Constants
	const int NUM_SHAPES = 3;
	const int NUM_CHOICES = 2;
	const char VALID_SHAPES[NUM_SHAPES] = { 'C', 'R', 'T' };
	const char VALID_CHOICES[NUM_CHOICES] = { 'Y', 'N' };

	// Variables
	Shape* shapePtr;
	char   shapeSelection;

	shapeSelection = ShapeMenu();

	return 0;
}

char ShapeMenu()
{
	char shapeSelection;

	// Prompt user to choose shape
	cout << "What Shape do you want:\n"
		<< "\t C) Circle\n"
		<< "\t R) Rectangle\n"
		<< "\t T) Triangle\n\n";

	cout << "Enter C, R or T: ";
	cin.get(shapeSelection);
	cin.ignore();
	return shapeSelection;
}

bool ValidateChar(char selection, char validChoices[], int ArSize)
{
	bool valid = false;

	for (int i = 0; i < ArSize; i++)
	{
		if (toupper(selection) == validChoices[i])
			return true;
	}

	return false;
}