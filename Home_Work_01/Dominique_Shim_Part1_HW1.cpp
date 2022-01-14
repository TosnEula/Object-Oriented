// Dominique_Shim_Part1_HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int gcd(int l, int m)
{
	if (l % m == 0)
		return m;
	else
		return gcd(m, l % m);
}


int main()
{
	int num1, num2;


	cout << "Please input your first number ";
	cin >> num1;
	cout << "\nPlease input your first number ";
	cin >> num2;
	
	cout << "\nThe GCD of your two numbers is: ";

	cout << gcd(num1, num2);



}
