//Function overriding, Early binding, Compile-time polymorphism
#include<iostream>
using namespace std;

class Base
{
	protected:
		float tgpa1,tgpa2,cgpa;
	public:
		void get()
		{
			cout<<"\nEnter tgpa for sem1: ";
			cin>>tgpa1;	
			cout<<"\nEnter tgpa for sem2: ";
			cin>>tgpa2;
		}
		void cal_cgpa()
		{
			cout<<"\nBase's function";
			cgpa=(tgpa1+tgpa2)/2;
			cout<<"\nThe cgpa is "<<cgpa;	
		}	
};

class Derived:public Base
{
	public:
		void cal_cgpa()
		{
			cout<<"\nDerived's function";
			cgpa=0.3*tgpa1+0.7*tgpa2;
			cout<<"\nThe cgpa is "<<cgpa;	
		}	
};

int main()
{
	Derived ob1;
	ob1.get();
	ob1.cal_cgpa();
	Base ob2;
	ob2.get();
	ob2.cal_cgpa();
	return 0;
}
