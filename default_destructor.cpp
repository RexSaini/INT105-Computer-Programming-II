#include<iostream>
using namespace std;
class Point
{
	int x;
	const int y;
	public:
		Point(int a=0):y(10)	//Default argument and Constant initialization
		{
			cout<<"\nObject created";
			x=a;
		}
		void read()
		{
			cout<<"\nEnter a value for x: ";
			cin>>x;
		}
		void show()
		{
			cout<<"\n"<<x<<"\t"<<y;
		}
		~Point()	//Default destructor
		{
			cout<<"\nObject destroyed";
		}
};
int main()
{
	Point p1,p2;
	Point p3(13);
	p1.read();
	p1.show();
	p2.read();
	p2.show();
	p3.show();
	return 0;
}
