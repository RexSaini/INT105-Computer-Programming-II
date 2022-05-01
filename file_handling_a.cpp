//File handling
#include<iostream>
#include<fstream>	//For file handling
using namespace std;

int main()
{
	string name;
	fstream file;
	file.open("firstM2041.txt",ios::out);
	file<<"Rohan"<<endl;
	file<<"Chaitanya"<<endl;
	file.close();
	file.open("firstM2041.txt",ios::in);
//	file>>name;    //Reads string till white spaces
//	cout<<name;
	while(!file.eof())	//Reads till end of file
	{
		file>>name;
		cout<<name<<endl;
	}
	file.close();
	return 0;
}
