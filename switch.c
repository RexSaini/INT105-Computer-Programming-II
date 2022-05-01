#include<stdio.h>
int main()
{
	int a,b,c;
	char choice;
	printf("Enter A for Addition, S for Subtraction, M for Multiplication: ");
	scanf("%c",&choice);
	fflush(stdin);
	printf("\nEnter first value: ");
	scanf("%d",&a);
	printf("\nEnter second value: ");
	scanf("%d",&b);
	switch(choice)
	{
		case 'A':c=a+b;
		printf("\nThe addition is %d",c);
		break;
		case 'S':if(a>b)
		{
			c=a-b;
			printf("\nThe subtraction is %d",c);
		}
		else
		{
			c=b-a;
			printf("\nThe subtraction is %d",c);
		}
		break;
		case 'M':c=a*b;
		printf("\nThe multiplication is %d",c);
		break;
		default:printf("\nInvalid Input");
	}
}
