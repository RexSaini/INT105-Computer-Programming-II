//Simple inheritance
#include<iostream>
using namespace std;
class Base
{
	int n1;
	protected:
		int n2;
	public:
		int n3;
	void read()
	{
		cout<<"\nEnter value for n1: ";
		cin>>n1;
	}
	void show()
	{
		cout<<"\nThe value of n1 is: "<<n1;
	}
};
class Derived:public Base
{
	int m1;
	public:
		int m2;
	void get()
	{
		cout<<"\nEnter value for m1: ";
		cin>>m1;
//		cin>>n1;	n1 is private so it can't be used here
		cout<<"\nEnter value for n2: ";
		cin>>n2;
	}
	void display()
	{
		cout<<"\nThe value of m1 is: "<<m1;
		cout<<"\nThe value of n2 is: "<<n2;
	}
};
int main()
{
	Derived d;
	d.m2=100;
	d.n3=200;
//	d.n1=500;	n1 private so it can't be used here
	d.read();
	d.get();
	d.show();
	d.display();
	cout<<"\nThe value of m2 is: "<<d.m2;
	cout<<"\nThe value of n3 is: "<<d.n3;
	return 0;
}
