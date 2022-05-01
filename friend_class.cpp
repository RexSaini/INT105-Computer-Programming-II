//Friend class
#include<iostream>
using namespace std;

class B;

class A
{
	int x;
	public:
		A()
		{
			x=1;
		}
		friend class B;    //Friend class
};

class B
{
	int y;
	public:
		B()
		{
			y=2;
		}
		void add()
		{
			A ob;
			cout<<y+ob.x;
		}
};

int main()
{
	B obj;
	obj.add();
	return 0;
}
