//Multilevel Inheritance
#include<iostream>
using namespace std;
class Base{
	public:
		int n;
		void print()
		{
			cout<<"\n"<<n;
		}	
};
class Derived:protected Base{
	public:
		int m;
		void get()
		{
			
		}
		void show()
		{
			cout<<"\nValue of m: "<<m;
		}
};
class Subderived:protected Derived{
	public:
		int x;
		void read()
		{
			cout<<"\nEnter data for Derived's m data member: ";
			cin>>m;
			cout<<"\nEnter data for Derived's n data member: ";
			cin>>n;
		}
		void display()
		{
			print();
			show();
			cout<<"\nAll data: "<<x<<"\t"<<m<<"\t"<<n;
		}
};
int main()
{
	Subderived ob;
	ob.x=1;
	ob.read();
	ob.display();
}
