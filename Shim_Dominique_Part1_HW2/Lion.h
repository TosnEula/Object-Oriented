#ifndef lion_h
#define lion_h
#include <string>


class Lion
{
private:
	double weight;
	double height;
	char gender;

public:
	Lion();
	Lion(double, double, char);


	double getweight();
	double getheight();
	char getgender();

	void setweight(double);
	void setheight(double);
	void setgender(char);

	void toPrint();
	void eat();

};
#endif // !lion_h
#pragma once