#include<stdio.h>
int sum(int,int); //Function Prototype

int sum(int x,int y) //Function Definition
{
	printf("x=%d,y=%d",x,y);
	int z=x+y;
	return z;
}
int main()
{
	int x=10,y=20,result;
	result=sum(x,y); //Function Call
	printf("\nThe sum of %d and %d is %d",x,y,result);
}
