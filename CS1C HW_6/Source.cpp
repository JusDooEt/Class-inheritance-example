/*************************************************
* Program: HW_6 - Source.cpp
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

char ShapeMenu();
bool ValidateChar(char selection, const char validChoices[], int ArSize);

int main()
{
	// Constants
	const int NUM_SHAPES = 3;
	const int NUM_CHOICES = 2;
	const char VALID_SHAPES[NUM_SHAPES] = { 'C', 'R', 'T' };
	const char VALID_CHOICES[NUM_CHOICES] = { 'Y', 'N' };

	// Variables
	double height;	//also used as base for triangles and length
	double width;
	double radius;
	Shape* shapePtr;
	char   shapeSelection;
	char   refresh;

	refresh = 'Y';
	
	
	while(toupper(refresh) == 'Y')
	{
		shapeSelection = ShapeMenu();
		if (!ValidateChar(shapeSelection, VALID_SHAPES, NUM_SHAPES))
		{
			cout << "Invalid entry... must be C, R, T.\n\n";
		}
		else
		{
			switch (shapeSelection)
			{
			case 'C': 
				cout << "Enter radius: ";
				cin >> radius;
				cin.ignore();

				shapePtr = new Circle(radius);

				cout << "Area of circle: " << shapePtr->calcArea();
				cout << endl << endl;
				delete shapePtr;
				shapePtr = NULL;
				break;

			case 'R':
				cout << "Enter length: ";
				cin >> height;
				cout << "Enter width: ";
				cin >> width;
				cin.ignore();

				shapePtr = new Rectangle(height, width);

				cout << "Area of rectangle: " << shapePtr->calcArea();
				cout << endl << endl;
				delete shapePtr;
				shapePtr = NULL;
				break;

			case 'T':
				cout << "Enter base: ";
				cin >> width;
				cout << "Enter height: ";
				cin >> height;
				cin.ignore();

				shapePtr = new Triangle(width, height);

				cout << "Area of triangle: " << shapePtr->calcArea();
				cout << endl << endl;
				delete shapePtr;
				shapePtr = NULL;
				break;
			}
		}


		cout << "Do you want to continue (y/n)? ";
		cin.get(refresh);
		cin.ignore();
		if (!ValidateChar(refresh, VALID_CHOICES, NUM_CHOICES))
		{
			do
			{
				cout << "\n\t<Please enter 'y' or 'n' to continue or exit the program>\n\n";
				cout << "Do you want to continue (y/n)? ";
				cin.get(refresh);
				cin.ignore();
			} while (!ValidateChar(refresh, VALID_CHOICES, NUM_CHOICES));
		}
		system("cls");
	}


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
	return toupper(shapeSelection);
}

bool ValidateChar(char selection, const char validChoices[], int ArSize)
{
	bool valid = false;

	for (int i = 0; i < ArSize; i++)
	{
		if (toupper(selection) == validChoices[i])
			return true;
	}

	return false;
}