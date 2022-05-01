//Constructor Functions
#include<iostream>
using namespace std;
class Sample
{
	int len,br;
	public:
		Sample()    //Default Constructor
		{
			len=0;
			br=0;
			cout<<"Object created";
		}
		Sample(float l,float b)    //Parameterized Constructor
		{
			len=l;
			br=b;
			cout<<"\nOblect created";
		}
		void get()
		{
			cout<<"\nEnter length of first object: ";
			cin>>len;
			cout<<"\nEnter breadth of second object: ";
			cin>>br;
		}
		void display()
		{
			cout<<"\n"<<"length: "<<len<<"\t"<<"breadth: "<<br;
		}
		float area()
		{
			return len*br;
		}
};
int main()
{
	Sample ob;    //Constructor calls automatically
	Sample ob1(100,110);    //Parameterized constructor is called
	ob.get();
	ob.display();
	float result=ob.area();
	cout<<"\nThe area of first object is: "<<result;
	ob1.display();
	float result1=ob1.area();
	cout<<"\nThe area of second object is: "<<result1;
}
