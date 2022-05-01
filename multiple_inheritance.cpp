// Multiple inheritance
#include <iostream>
using namespace std;

class Result
{
	float ca, mte, ete;

public:
	string subject;
	void input()
	{
		// subject="Computer Programming-II";
		// or
		cout << "Enter the subject: ";
		getline(cin, subject);
		cout << "\nEnter marks for ca 20, mte 25, ete 50: ";
		cin >> ca >> mte >> ete;
	}
	float cal_ca_marks()
	{
		return (ca + mte + ete);
	}
};
class Attendance
{
	int attendance;
	float at_marks;

public:
	void get()
	{
		cout << "\nEnter attendance percentage: ";
		cin >> attendance;
	}
	float cal_at_marks()
	{
		if (attendance > 90 && attendance <= 100)
			return 5;
		else if (attendance > 80 && attendance <= 90)
			return 3;
		else if (attendance > 70 && attendance <= 80)
			return 1;
		else
			return 0;
	}
};
class Student : public Result, public Attendance
{
	float total_marks;
	int regdno;

public:
	void read()
	{
		cout << "\nEnter your registration number: ";
		cin >> regdno;
	}
	void cal_total_marks()
	{
		total_marks = cal_ca_marks() + cal_at_marks();
		cout << "\nThe marks of " << regdno << " in " << Result::subject << " is " << total_marks;
	}
};
int main()
{
	Student s;
	s.input();
	s.get();
	s.read();
	s.cal_total_marks();
}
