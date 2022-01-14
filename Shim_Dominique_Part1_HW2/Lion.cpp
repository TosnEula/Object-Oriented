#include <iostream>
#include "Lion.h"
#include <string>



Lion::Lion()
{
	weight = 0;
	height = 0;
	gender = 'M';
}


Lion::Lion(double _weight, double _height, char _gender)
{
	weight = _weight;
	height = _height;
	gender = _gender;
}

void Lion::setweight(double _weight)
{
	weight = _weight;
}

void Lion::setheight(double _height)
{
	height = _height;
}

void Lion::setgender(char _gender)
{
	if (toupper(_gender) == 'M' || toupper(_gender) == 'F')
		gender = _gender;
	else
		std::cout << "please give a valid gender (F or M)";
}



double Lion::getweight()
{
	return weight;
}
double Lion::getheight()
{
	return height;
}


char Lion::getgender()
{
	return gender;
}


void Lion::toPrint()
{
	std::cout << "The weight of the lion is: " << weight << "lb" << "\nThe height of the lion is: " << height << "cm" <<"\nThe gender of the lion is: " << gender << "\n";
}

void Lion::eat()
{
	if (gender == 'M' || gender == 'm')
		std::cout << "The lion should eat 8 pounds of food\n";
	else
		std::cout << "The lion should eat 6 pounds of food\n"; 
}
