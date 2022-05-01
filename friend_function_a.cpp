//Friend function
#include<iostream>
using namespace std;

class Sample
{
	private:
		float length;
	public:
		void get();    //Member function
		friend float convert(Sample);    //Friend function
};

void Sample::get()
{
	cout<<"\nEnter length in kilometers: ";
	cin>>length;
}

float convert(Sample s)
{
	return (s.length*1000);
}

int main()
{
	Sample ob;
	ob.get();
	float result=convert(ob);
	cout<<"\nThe length in meters is: "<<result;
	return 0;
}
