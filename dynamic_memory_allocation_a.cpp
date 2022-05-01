#include<iostream>
using namespace std;

int main()
{
	string name;
	cout<<"Enter your name: ";
	getline(cin,name);
	cout<<"\nThe name is: "<<name;
	int *arr,size;
	cout<<"\nEnter the number of elements required: ";
	cin>>size;
	arr=new int[size];	//Dynamic memory allocation
	cout<<"\nEnter "<<size<<" elements"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nThe elements are: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	delete arr;
}
