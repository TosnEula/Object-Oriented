#include "Time.h"
#include<iostream>
using namespace std;
Time::Time(unsigned int h = 0, unsigned int m = 0)
{
	hours = h + m / 60;
	minutes = m % 60;
}

void Time::showTime()
{
	cout << hours << "hrs " << minutes << "min";
}

Time Time::operator+(const Time& t1) const
{
	Time t;
	t.minutes = minutes + t1.minutes;
	t.hours = (t.minutes / 60) + hours + t1.hours;
	t.minutes = t.minutes % 60;
	return t;

}

bool Time::operator>(const Time& t1) const
{
	if (((hours * 60) + minutes) > ((t1.hours * 60) + t1.minutes))
		return true;
	else return false;
}

Time Time::operator-(const Time& t1) const
{
	Time t;
	int ti = ((hours * 60) + minutes) - ((t1.hours * 60) + t1.minutes);
	if (ti <= 0)
	{
		t.hours = 0;
		t.minutes = 0;
	}
	else
	{
		t.hours = ti / 60;
		t.minutes = ti % 60;
	}
	return t;
}