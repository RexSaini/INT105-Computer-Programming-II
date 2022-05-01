//Virtual functions, Late binding, Run-time polymorphism
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
		virtual void cal_cgpa()
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
	Base *p;
	p=new Derived;
	p->get();
	p->cal_cgpa();
	p=new Base;
	p->get();
	p->cal_cgpa();
	delete p;
	return 0;
}
