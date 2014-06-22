/* oez-P1.cpp
	Student name:			Oscar Zavala
	Student ID:				0198873
	EGR-123-001				Spring 2014
	Programing Exercise: 1
	Assigned:				01-23-2014
	Due:						02-05-2014
	Program Description:	Input the circumference of a circle and perform operations
								on it to display the area of several polygons inscribed
								and circumscribed onto the given circle.
	Developed on:			01-24-2014
	Modified on:			
*/

#include <iostream> // allows program to perform input and output
#include <cmath>
using namespace std; // allows program to use cout and cin without std:: notation

//	function main begins program execution

int main()
{
	double pi = 3.14159;
	double radius = 0; // initiallizes pi as constant and establishes radius as double variable
	unsigned int rerun = 1; // initializes rerun loop-checker as 1

	while (rerun != 0) // begins loop check for rerun = 0
	{
		cout << "Enter radius r: ";
		cin >> radius ;

		cout << "                     Diameter     = 2 * r             = " << 2 * radius << endl;							// prints Diameter calculation
		cout << "                Circumference     = 2*pi*r            = " << 2 * radius * pi << endl;					// prints Circumference calculation
		cout << "               Area of Circle     = pi*r^2            = " << pi * radius * radius << endl;			// prints Area of circle calculation
		cout << "     Area of Square inscribed     = 2*r^2             = " << 2 * radius * radius << endl;	// prints area of square inscribed
		cout << " Area of Square circumscribed     = (2*r)^2           = " << 2 * 2 * radius * radius << endl; // prints area of square circumscribed
		cout << "    Area of Hexagon inscribed     = 3/2*(r^2)*3^(1/2) = " << 3 / 2 * radius * radius * pow(3, .5)  << endl; // prints area of inscribed hexagon 
		cout << "Area of Hexagon circumscribed     = 6*(r^2)/3^(1/2)   = " << 6 * radius * radius / pow (3, .5) << endl << endl; // prints area of circumscribed hexagon

		cout << " Re-run program?  Enter 0 to terminate, any other number to continue ";
		cin >> rerun;
	}
	}