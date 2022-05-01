// File handling
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int rollno;
	string name;
	double fees;
    fstream file;
    file.open("myFile.dat",ios::out);
    cout<<"Enter your roll no: ";
    cin>>rollno;
    file<<rollno<<" ";
    cout<<"\nEnter your name: ";
    cin>>name;
    file<<name<<" ";
    cout<<"\nEnter your fees: ";
    cin>>fees;
    file<<fees;
    file.close();
    file.open("myFile.dat",ios::in);
    file>>rollno>>name>>fees;
    cout<<rollno<<"\t"<<name<<"\t"<<fees;
    file.close();
    return 0;
}
