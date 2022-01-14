// Dominique_Shim_Part2_HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void rShift(int& a, int& b, int& c, int& d, int& sum, int& avg)    //Hw01
{
	sum = a + b + c + d;
	avg = sum / 4;


	int tmp1 = a;
	int tmp2 = b;
	a = d;
	b = tmp1;
	tmp1 = c;
	c = tmp2;
	d = tmp1;

}



int main()
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	int num4 = 4;
	int avg = 0, sum = 0;


	cout << "The numbers before shifting them are:" << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

	rShift(num1, num2, num3, num4, sum, avg);

	cout << "The numbers after shifting them are:" << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
	cout << "average of the values is " << avg << endl;
}

