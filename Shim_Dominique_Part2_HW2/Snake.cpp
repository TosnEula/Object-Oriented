#include <iostream>
#include "Snake.h"
#include <string>



Snake::Snake()
{
	colour = "Green";
	length = 0;
	venemous = 0;
}


Snake::Snake(string _colour, double _length, bool _venemous)
{
	colour = _colour;
	length = _length;
	venemous = _venemous;
}

void Snake::setColour(string _colour)
{
	colour = _colour;
}

void Snake::setLength(double _length)
{
	length = _length;
}

void Snake::setVenemous(bool _venemous)
{
	venemous = _venemous;
}



string Snake::getColour()
{
	return colour;
}

double Snake::getLength()
{
	return length;
}


bool Snake::getVenemous()
{
	return venemous;
}


void Snake::bite()
{
	if (venemous == 1)
		cout << "Snake is venemous" << endl;
	else
		cout << "Snake is not venemous" << endl;
}

void Snake::display()
{
	cout << "The snake's length is: " << length << " \nThe snake's colour is: " << colour << " \nThe snake's venom test shows: " << venemous << endl;
}
