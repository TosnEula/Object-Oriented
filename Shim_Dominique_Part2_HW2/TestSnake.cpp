// Snake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Snake.h"

using namespace std;

int main()
{
    Snake solidus;
	Snake Chrysanthakopoulos("Pink", 56, 1);

	solidus.display();
	solidus.bite();
	solidus.setColour("Grey");
	solidus.setLength(35);
	cout << "The new colour of solidus is " << solidus.getColour() << " and its length is " << solidus.getLength() << "cm" << endl;



	cout << endl;
	Chrysanthakopoulos.display();
	Chrysanthakopoulos.bite();

}
