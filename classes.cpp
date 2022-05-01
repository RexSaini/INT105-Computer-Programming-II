#include<iostream>
using namespace std;
class Sample
{
	int a;
	public:
		Sample()
		{
			cout<<"Object created\n";
		}
		void get()
		{
			cout<<"Enter value: ";
			cin>>a;
			cout<<endl;
		}
		void display()
		{
			cout<<"\nThe value entered is: "<<a<<endl;
		}
};
int main()
{
	Sample ob[5];
	for(int i=0;i<5;i++)
	{
		ob[i].get();
		ob[i].display();
	}
}
