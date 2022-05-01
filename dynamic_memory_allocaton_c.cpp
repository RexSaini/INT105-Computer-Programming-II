#include<iostream>
using namespace std;

class Section
{
	int *rollno;
	int n;
	public:
		Section()	//Dynamic constructor
		{
			cout<<"\nEnter number of students: ";
			cin>>n;
			rollno=new int[n];	
		}
		~Section()	//Dynamic destructor
		{
			cout<<"\nObject destroyed";	
			delete[] rollno;
		}	
};

int main()
{
	Section s1;
	cout<<"\nSize: "<<sizeof(s1);
	return 0;
}
