// Hierarchial inheritance
#include <iostream>
using namespace std;
class University
{
	string univ_name;

public:
	string get_uname()
	{
		cout << "\nEnter university name: ";
		getline(cin, univ_name);
		return univ_name;
	}
};
class Faculty : public University
{
	string faculty_name;

public:
	string get_fname()
	{
		cout << "\nEnter faculty name: ";
		getline(cin, faculty_name);
		return faculty_name;
	}
	void display()
	{
		cout << "\nThe faculty is "
			 << "\t" << get_fname() << "\t"
			 << "teaching in "
			 << "\t" << get_uname();
	}
};
class Student : public University
{
	string student_name;

public:
	string get_sname()
	{
		cout << "\nEnter student name: ";
		getline(cin, student_name);
		return student_name;
	}
	void display()
	{
		cout << "\nThe student is "
			 << "\t" << get_sname() << "\t"
			 << "studying in "
			 << "\t" << get_uname();
	}
};
int main()
{
	Faculty f;
	f.display();
	Student s;
	s.display();
}
