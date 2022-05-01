/*
INT105
CA2
Name: Rohan Kumar Saini
Roll No: RM2041A01
Reg No: 12011878
Question4
*/
#include <iostream>
using namespace std;

class Student
{
protected:
    string name, section;
    float percentage, ca1, ca2, ca3, mte, ete;
    int att;

public:
    Student()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter section: ";
        getline(cin, section);
    }
};

class CA : virtual public Student
{
public:
    CA()
    {
        cout << "Enter CA1 marks out of 25: ";
        cin >> ca1;
        cout << "Enter CA2 marks out of 25: ";
        cin >> ca2;
        cout << "Enter CA3 marks out of 25: ";
        cin >> ca3;
        cout << "Enter MTE marks out of 20: ";
        cin >> mte;
        cout << "Enter ETE marks out of 50: ";
        cin >> ete;
    }
};

class Attendance : virtual public Student
{
public:
    Attendance()
    {
        cout << "Enter attendance marks out of 5: ";
        cin >> att;
    }
};

class Result : public CA, public Attendance
{
public:
    Result()
    {
        percentage = att + (ca1 + ca2 + ca3) / 3 + mte + ete;
        cout << "\nCandidate: " << name << endl;
        cout << "Section: " << section << endl;
        cout << "Percentage = " << percentage << "%" << endl;
    }
};

int main()
{
    Result r1;
    return 0;
}