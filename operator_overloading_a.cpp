//Operator overloading
#include<iostream>
using namespace std;

class Point
{
	int x,y;
	public:
		Point(int x,int y)
		{
			(*this).x=x;	//this is a pointer holding address of current object
			this->y=y;
		}
		void display()
		{
			cout<<"x:"<<this->x<<"\t"<<"y:"<<this->y<<endl;
		}
		void operator --()	//Pre-decrement unary operator
		{
			--x;
			--y;
		}
		void operator --(int)	//Post-decrement unary operator
		{
			x--;
			y--;
		}
		void operator -()	//Unary minus	
		{
			x=-x;
			y=-y;
		}
};

int main()
{
	Point p1(5,4);
	--p1;
	p1.display();
	p1--;
	p1.display();
	-p1;
	p1.display();
	return 0;
}
