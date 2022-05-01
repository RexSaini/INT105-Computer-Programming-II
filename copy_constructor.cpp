//Copy Constructor
#include<iostream>
using namespace std;
class Point
{
	int x;
	int y;
	public:
		Point():x(10),y(10)    //Initializer list
		{
//			x=y=0;
		}
		void get()
		{
			cout<<"\nEnter two values for axes: ";
			cin>>x>>y;
		}
		void display()
		{
			cout<<"\nThe axes are ("<<x<<", "<<y<<")";
		}
		Point(const Point &ob)
		{
			x=ob.x;
			y=ob.y;
		}
};
int main()
{
	Point p1;
//	p1.get();
	p1.display();
	Point p2(p1);
	p2.display();
	Point p3=p1;
	p3.display();
	
	int m=100;
	int n(200);
	cout<<"\n m is "<<m<<" & "<<"n is "<<n;
}
