#include<iostream>
#include<string.h>
using namespace std;
class User
{
	char name[20];
	char email[50];
	long long int contact;
	public:
		static int total_users;
		User(char n[20],char em[50], long long int c)
		{
			strcpy(name,n);
			strcpy(email,em);
			contact=c;
			total_users++;
		}
		void display()
		{
			cout<<"\n"<<name<<"\t"<<email<<"\t"<<contact;
		}
};
int User::total_users=0;
int main()
{
	User u1("Rohan","rohan@lpu.in",7070551399);
	User u2("Chaitanya","chaitanya@lpu.in",6789541723);
	u1.display();
	u2.display();
	cout<<"\nThe number of users are: "<<User::total_users;
	cout<<"\nThe number of users are: "<<u1.total_users;
	cout<<"\nThe number of users are: "<<u2.total_users;
}
