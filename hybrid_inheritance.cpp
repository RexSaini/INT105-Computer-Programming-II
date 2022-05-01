// Hybrid inheritance
#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base's constructor" << endl;
	}
	~Base()
	{
		cout << "Base's destructor" << endl;
	}
};

class Base1 : virtual public Base
{
public:
	Base1()
	{
		cout << "Base1's constructor" << endl;
	}
	~Base1()
	{
		cout << "Base1's destructor" << endl;
	}
};

class Base2 : virtual public Base
{
public:
	Base2()
	{
		cout << "Base2's constructor" << endl;
	}
	~Base2()
	{
		cout << "Base2's destructor" << endl;
	}
};

class Derived : public Base1, public Base2
{
public:
	Derived()
	{
		cout << "Derived's constructor" << endl;
	}
	~Derived()
	{
		cout << "Derived's destructor" << endl;
	}
};

int main()
{
	Derived ob;
}
