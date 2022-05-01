//Operator overloading
#include<iostream>
using namespace std;

class Point
{
	int x,y;
	public:
		Point(){}
		Point(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void operator --()
		{
			--x;
			--y;
		}
		void operator ++(int)
		{
			x++;
			y++;
		}
		Point operator + (Point ob)    //Binary plus operator
		{
			Point temp;
			temp.x=x+ob.x;
			temp.y=y+ob.y;
			return temp;
		}
		Point operator - (Point ob)    //Binary minus operator
		{
			Point temp;
			temp.x=x-ob.x;
			temp.y=y-ob.y;
			return temp;
		}
		Point operator * (Point ob)    //Binary multiply operator
		{
			Point temp;
			temp.x=x*ob.x;
			temp.y=y*ob.y;
			return temp;
		}
		void display()
		{
			cout<<"After operation: "<<x<<"\t"<<y<<endl;
		}
};

int main()
{
	Point p1(5,2);
	Point p2(2,5);
	Point p,q;
	p=p1+p2;
	p.display();
	p=p2-p1;
	p.display();
	--p1;
	p2++;
	q=p2*p1;
	q.display();
	return 0;
}
