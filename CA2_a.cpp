/*
INT105
CA2
Name: Rohan Kumar Saini
Roll No: RM2041A01
Reg No: 12011878
Question1
*/
#include <iostream>
using namespace std;

class Admission
{
protected:
    static int adm_id, reg_no;

public:
    void info()
    {
        adm_id++;
        reg_no++;
    }
};
int Admission ::adm_id = 1000;
int Admission ::reg_no = 500;

class Result
{
protected:
    float tgpa1, tgpa2, cgpa;

public:
    void get()
    {
        cout << "\nEnter tgpa1 marks: ";
        cin >> tgpa1;
        cout << "\nEnter tgpa2 marks: ";
        cin >> tgpa2;
    }
    void calc()
    {
        cgpa = (tgpa1 + tgpa2) / 2;
    }
};

class Student : public Admission, public Result
{
    string name, mail, section;
    long long int contact;

public:
    void set()
    {
        cout << "\nEnter name: ";
        getline(cin, name);
        cout << "\nEnter section: ";
        getline(cin, section);
        cout << "\nEnter email: ";
        getline(cin, mail);
        cout << "\nEnter contact number: ";
        cin >> contact;
    }
    void show()
    {
        info();
        cout << endl;
        cout << "The name of the student is: " << name << endl;
        cout << "The section of the student is: " << section << endl;
        cout << "The email of the student is: " << mail << endl;
        cout << "The contact number of the student is: " << contact << endl;
        cout << "The admission ID of the student is: " << adm_id << endl;
        cout << "The Registration number of the student is: " << reg_no << endl;
        cout << "The cgpa of the student is: " << cgpa << endl;
    }
};

int main()
{
    int i = 0;
    Student s[5];
    do
    {
        cout << "\nStudent " << (i + 1) << endl;
        s[i].set();
        s[i].get();
        s[i].calc();
        s[i].show();
        i++;
        getchar();
    } while (i < 5);
    return 0;
}