/*
INT105
CA3
Name: Rohan Kumar Saini
Roll No: RM2041A01
Reg No: 12011878
Question4
*/
#include <iostream>
using namespace std;

class Employee
{
    string name;
    long long int contact;

public:
    void get()
    {
        fflush(stdin);
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter contact number: ";
        cin >> contact;
    }
    void display()
    {
        cout << "\nThe name is " << name << endl;
        cout << "The contact number is " << contact << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee *p = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\nEmployee "<<(i+1)<<endl;
        p[i].get();
    }
    cout<<"\nDisplaying details"<<endl;
    for (int i = 0; i < n; i++)
    {
        p[i].display();
    }
    delete[] p;
    return 0;
}