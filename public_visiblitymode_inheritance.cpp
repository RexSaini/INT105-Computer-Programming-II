#include<iostream>
using namespace std;
class Admission{
	private:
		int aid;
	public:
		Admission()
		{
			aid++;
		}
		int get_aid()
		{
			return aid;
		}
};
class Result:public Admission{
	float cgpa;
	protected:
		string section;
	public:
		void input()
		{
			cout<<"\nEnter your CGPA: ";
			cin>>cgpa;
			cout<<"\nEnter your section: ";
			cin>>section;
		}
		float get_cgpa()
		{
			return cgpa;
		}
		string get_section()
		{
			return section;
		}
};
class Student:public Result{
	public:
		string name;
		int regno;
		void read()
		{
			cout<<"\nEnter your name: ";
			cin>>name;
			cout<<"\nEnter your registration no.: ";
			cin>>regno;
			input();
		}
		void display()
		{
			cout<<"\n"<<name<<"\t"<<regno<<"\t"<<get_cgpa()<<"\t"<<get_section()<<"\t"<<get_aid();
		}
};
int main()
{
	Student s1,s2;
	s1.read();
	s1.display();
	s2.read();
	s2.display();
}
