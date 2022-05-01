//Dynamic memory allocation
#include<iostream>
using namespace std;

class Student
{
	int rollno;
	public:
		Student()
		{
			cout<<"\nObject successfully created";
		}
	void get()
	{
		cout<<"\nEnter roll number: ";
		cin>>rollno;
	}
	void display()
		{
			cout<<endl<<rollno;
		}
	~Student()
	{
		cout<<"\nObject destroyed";
	}
};
int main()
{
    int n;
    cout<<"\nEnter number of students: ";
    cin>>n;
    Student *ob=new Student[n];
    for(int i=0;i<n;i++)
    ob[i].get();
    for(int i=0;i<n;i++)
    ob[i].display();
    delete[] ob;
    return 0;
}
