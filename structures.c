#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
    char name[15];
}arr[5];

int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter student's name: ");
		scanf("%s",&arr[i].name);
		printf("Enter roll number: ");
		scanf("%d",&arr[i].roll_no);
	}
	for(i=0;i<5;i++)
	{
		printf("\nName: %s",arr[i].name);
		printf("\nRoll No: %d",arr[i].roll_no);
	}
}
