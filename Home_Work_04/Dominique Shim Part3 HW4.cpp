#include <iostream>
using namespace std;

class Rectangle
{
private:
	double width;
	double height;

public:
	Rectangle()
	{
		width = 1;
		height = 2;
	}

	Rectangle(double width, double height)
	{
		this->width = width;
		this->height = height;
	}

	double area() const
	{
		return width * height;
	}



};

bool operator < (Rectangle const& rec1, Rectangle const& rec2)
{
	if (rec1.area() < rec2.area())
		return true;
	else
		return false;
}

bool operator == (Rectangle const& rec1, Rectangle const& rec2)
{
	if (rec1.area() == rec2.area())
		return true;
	else
		return false;
}

bool operator >= (Rectangle const& rec1, Rectangle const& rec2)
{
	if (rec1.area() >= rec2.area())
		return true;
	else
		return false;
}

bool operator != (Rectangle const& rec1, Rectangle const& rec2)
{
	if (rec1.area() != rec2.area())
		return true;
	else
		return false;
}



int main()
{

	Rectangle rect1;
	Rectangle rect2(3.2, 6.2);

	bool result1;
	bool result2;
	bool result3;
	bool result4;


	if (rect1 < rect2)
		result1 = true;
	else
		result1 = false;

	if (rect1 == rect2)
		result2 = true;
	else
		result2 = false;

	if (rect1 >= rect2)
		result3 = true;
	else
		result3 = false;

	if (rect1 != rect2)
		result4 = true;
	else
		result4 = false;


	cout << result1 << endl;
	cout << result2 << endl;
	cout << result3 << endl;
	cout << result4 << endl;
}