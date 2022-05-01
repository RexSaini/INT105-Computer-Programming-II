//for loop
#include<stdio.h>
int main()
{
	int i,num,count=0,a,_num,sum,x;
	printf("Even numbers from 1 to 100: ");
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf("\nEnter a number to check whether it's prime or non-prime : ");
	scanf("%d",&num);
	for(a=1;a<=num;a++)
	{
		if(num%a==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\nPrime");
	}
	else
	{
		printf("\nNon-prime");
	}
		for(x=1;x<=10;x++)
	{
		printf("\nEnter the value: ");
		scanf("%d",&_num);
		sum=sum+_num;
	}
	printf("\nSum is %d: ",sum);
}


