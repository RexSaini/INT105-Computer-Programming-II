// File handling
#include <iostream>
#include <fstream>
using namespace std;

class Sample
{
public:
	int rollno;
	string name;
	double fees;
	char c;
	void get()
	{
		cout << "Enter your roll no: ";
		cin >> rollno;
		cout << "\nEnter your name: ";
		cin >> name;
		cout << "\nEnter your fees: ";
		cin >> fees;
		c = '\n';
	}
	void display()
	{
		cout << rollno << "\t" << name << "\t" << fees<<endl;
	}
};

int main()
{
	Sample s, e, s1;
	fstream f;
	f.open("Records.txt", ios::out);
	s.get();
	f.write((char *)&s, sizeof(s));
	f.close();
	f.open("Records.txt", ios::app);
	s1.get();
	f.write((char *)&s1, sizeof(s1));
	f.close();
	f.open("Records.txt", ios::in);
	f.seekg(0); // Set the pointer at first character
	f.read((char *)&e, sizeof(e));
	while (!f.eof())
	{
		e.display();
		f.read((char *)&e, sizeof(e));
	}
	f.close();
	return 0;
}
