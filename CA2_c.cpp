/*
INT105
CA2
Name: Rohan Kumar Saini
Roll No: RM2041A01
Reg No: 12011878
Question3
*/
#include <iostream>
using namespace std;

class Student
{
    float percentage;

protected:
    float tgpa1, tgpa2, cgpa;

public:
    Student() {}
    Student(int a)
    {
        const int total_marks = 500;
        percentage = a * 100 / total_marks;
        cout << "Total percentage = " << percentage << "%" << endl;
    }
    Student(string sub, float a)
    {
        const int marks = 100;
        percentage = a * 100 / marks;
        cout << "Percentage in " << sub << " is = " << percentage << "%" << endl;
    }
    void get()
    {
        cout << "\nEnter tgpa for sem1: ";
        cin >> tgpa1;
        cout << "Enter tgpa for sem2: ";
        cin >> tgpa2;
    }
    void cal_cgpa()
    {
        cgpa = (tgpa1 + tgpa2) / 2;
        cout << "\nThe cgpa is " << cgpa << endl;
    }
};

class Faculty : public Student
{
public:
    void cal_cgpa()
    {
        cgpa = (0.4 * tgpa1 + 0.6 * tgpa2);
        cout << "\nThe cgpa is " << cgpa<<endl;
    }
};

int main()
{
    Student ob1(400);
    Student ob2("INT105", 40);
    Student ob3;
    ob3.get();
    ob3.cal_cgpa();
    Faculty f1;
    f1.get();
    f1.cal_cgpa();
    return 0;
}