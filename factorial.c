#include<stdio.h>
int main()
{
	signed long long int i,fact=1,num;
	printf("Enter the value: ");
	scanf("%lld",&num);
	if(num>0)
	{
		for(i=num;i>0;i--)
	{
				fact=fact*i;
	}
	printf("\nThe factorial of %lld is %lld: ",num,fact);
	}
	else if(num==0)
	{
		printf("\nThe factorial of %lld is %lld: ",num,fact);
	}
	else
	{
		printf("\nError:Enter positive value");
	}
}
