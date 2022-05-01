#include<stdio.h>
int main()
{
	int sum=0,num;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num>=0)
	{
		sum=sum+num;
		printf("\nEnter a number: ");
		scanf("%d",&num);
	}
	printf("\nThe sum is: %d",sum);
}
