// Lion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Lion.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	Lion Tony;
	Lion Ricardio(155.9, 90, 'm');
	Lion Geraldine(120.1, 88.3, 'f');



	Tony.toPrint();
	Tony.setweight(200.8);
	cout << "Tony's weight is: " << Tony.getweight() << endl;
	
	cout << endl;
	Ricardio.toPrint();
	Ricardio.eat();
	
	cout << endl;
	Geraldine.toPrint();
	Geraldine.eat();

}
