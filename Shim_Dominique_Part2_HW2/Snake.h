#ifndef Snake_h
#define Snake_h
#include <string>

using namespace std;


class Snake
{
private:
	string colour;
	double length;
	bool venemous;

public:
	Snake();
	Snake(string, double, bool);


	string getColour();
	double getLength();
	bool getVenemous();

	void setColour(string);
	void setLength(double);
	void setVenemous(bool);

	void display();
	void bite();

};
#endif // !Snake_h
#pragma once

