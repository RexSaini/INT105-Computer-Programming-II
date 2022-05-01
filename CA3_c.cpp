/*
INT105
CA3
Name: Rohan Kumar Saini
Roll No: RM2041A01
Reg No: 12011878
Question3
*/
#include <iostream>
using namespace std;

class Base
{
protected:
    string name, rollno;

public:
    virtual void get() = 0;
};

class Derived1 : public Base
{
public:
    void get()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll no: ";
        getline(cin, rollno);
    }
    void display()
    {
        cout << "\nThe name is " << name<<endl;
        cout << "The roll no is " << rollno<<endl;
    }
};

class Derived2 : public Base
{
public:
    void display()
    {
        cout << "The name is " << name<<endl;
        cout << "The roll no is" << rollno<<endl;
    }
};

int main()
{
    Derived1 ob1;
    ob1.get();
    ob1.display();
    Derived2 ob2;    //The below lines will show an error, we need to redefine get function
    ob2.get();
    ob2.display();
    return 0;
}