// Friend function
#include <iostream>
using namespace std;
class M2042; // Forward declaration

class M2041
{
	float avg_cgpa;

public:
	friend void more(M2041, M2042);
	void get()
	{
		float a;
		cout << "Enter cgpa for M2041: ";
		cin >> a;
		avg_cgpa = a;
	}
	void show()
	{
		cout << "The average cgpa of whole section is: " << avg_cgpa << endl;
	}
};

class M2042
{
	float avg_cgpa;

public:
	friend void more(M2041, M2042);
	void get()
	{
		float a;
		cout << "Enter cgpa for M2042: ";
		cin >> a;
		avg_cgpa = a;
	}
	void show()
	{
		cout << "The average cgpa of whole section is: " << avg_cgpa << endl;
	}
};

void more(M2041 a, M2042 b)
{
	if (a.avg_cgpa > b.avg_cgpa)
	{
		cout << "\nM2041's cgpa more";
	}
	else
	{
		cout << "\nM2042's cgpa more";
	}
}

int main()
{
	M2041 ob1;
	ob1.get();
	ob1.show();
	M2042 ob2;
	ob2.get();
	ob2.show();
	more(ob1, ob2);
	return 0;
}
