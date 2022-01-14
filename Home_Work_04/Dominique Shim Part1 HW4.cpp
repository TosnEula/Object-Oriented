
#include <iostream>
#include <string>

using namespace std;


class Animal
{
	public:

		Animal()
		{
			cout << "Constructor of animal class" << endl;
		}

		virtual void eat()
		{
			cout << "Eat method of animal class" << endl;
		}

		virtual void grow()
		{
			cout << "Grow method of animal class" << endl;
		}

};

class Fish: public Animal
{
public:

	Fish()
	{
		cout << "Constructor of fish class" << endl;
	}


	void eat()
	{
		cout << "Eat method of fish class" << endl;
	}

};


class Sardine : public Fish
{
public:

	Sardine()
	{
		cout << "Constructor of Sardine class" << endl;
	}

	void grow()
	{
		cout << "Grow method of Sardine class" << endl;
	}

};

class Bass : public Fish
{
public:

	Bass()
	{
		cout << "Constructor of bass class" << endl;
	}

	void eat()
	{
		cout << "Eat method of bass class" << endl;
	}

};

class Mammal : public Animal
{
public:

	Mammal()
	{
		cout << "Constructor of mammal class" << endl;
	}

};

class Cat : public Mammal
{
public:

	Cat()
	{
		cout << "Constructor of cat class" << endl;
	}

	void grow()
	{
		cout << "Grow method of cat class" << endl;
	}

	void eat()
	{
		cout << "Eat method of cat class" << endl;
	}

};

class Lion : public Cat
{
public:

	Lion()
	{
		cout << "Constructor of lion class" << endl;
	}

	void grow()
	{
		cout << "Grow method of lion class" << endl;
	}



};

class Tiger : public Cat
{
public:

	Tiger()
	{
		cout << "Constructor of tiger class" << endl;
	}
};


void display(Animal& a1)
{
	a1.eat();
	a1.grow();

}


int main()
{
	Animal a;
	Fish b;
	Mammal c;
	Sardine d;
	Bass e;
	Cat f;
	Tiger g;
	Lion h;

	
	display(a);
	cout << endl;
	display(b);
	cout << endl;
	display(c);
	cout << endl;
	display(d);
	cout << endl;
	display(e);
	cout << endl;
	display(f);
	cout << endl;
	display(g);
	cout << endl;
	display(h);

}