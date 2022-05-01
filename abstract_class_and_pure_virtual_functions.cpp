// Abstract class and Pure virtual functions
#include <iostream>
using namespace std;

class Academics // Abstract class
{
protected:
	float cgpa;

public:
	virtual void cal_cgpa() = 0; // Pure virtual function
	void display()
	{
		cout << "The cgpa is: " << cgpa << endl;
	}
};

class Student : public Academics
{
	float tgpa1, tgpa2;

public:
	void get(float a, float b)
	{
		tgpa1 = a;
		tgpa2 = b;
	}
	void cal_cgpa()
	{
		cgpa = (tgpa1 + tgpa2) / 2;
	}
};

class Teacher : public Academics
{
	float sem1_points, sem2_points, remarks;

public:
	void get(float a, float b, int c)
	{
		sem1_points = a;
		sem2_points = b;
		remarks = c;
	}
	void cal_cgpa()
	{
		cgpa = 0.2 * remarks + 0.4 * (sem1_points + sem2_points);
	}
};

int main()
{
	Student s1;
	float a, b;
	cout << "\nEnter tgpa1 of student: ";
	cin >> a;
	cout << "\nEnter tgpa2 of student: ";
	cin >> b;
	s1.get(a, b);
	s1.cal_cgpa();
	s1.display();
	Teacher t1;
	float c, d;
	int e;
	cout << "\Enter tgpa1 of faculty: ";
	cin >> c;
	cout << "\nEnter tgpa2 of faculty: ";
	cin >> d;
	cout << "\nEnter remarks of faculty: ";
	cin >> e;
	t1.get(c, d, e);
	t1.cal_cgpa();
	t1.display();
	return 0;
}
