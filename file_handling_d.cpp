// File handling
#include <iostream>
#include <fstream>
using namespace std;

class Customer
{
public:
	string name;
	long int acc_no;
	double balance;
	char c;
	void get()
	{
		fflush(stdin);
		cout << "Enter name: ";
		getline(cin, name);
		cout << "Enter account number: ";
		cin >> acc_no;
		cout << "Enter balance: ";
		cin >> balance;
		c = '\n';
	}
	void display()
	{
		cout << "\nCustomer's name: " << name << endl;
		cout << "Customer's account number: " << acc_no << endl;
		cout << "Customer's balance: " << balance << endl;
	}
};

int main()
{
	Customer *ptr = new Customer[5];
	Customer e;
	fstream file;
	file.open("customerDetails.txt", ios::out);
	for (int i = 0; i < 5; i++)
	{
		cout << "Customer " << (i + 1) << endl;
		ptr[i].get();
		file.write((char *)&ptr[i], sizeof(ptr[i]));
	}
	file.close();
	file.open("customerDetails.txt", ios::in);
	file.seekg(0);
	file.read((char *)&e, sizeof(e));
	cout << "\nDisplaying details" << endl;
	while (file.eof() == 0)
	{
		e.display();
		file.read((char *)&e, sizeof(e));
	}
	file.close();
	return 0;
}
