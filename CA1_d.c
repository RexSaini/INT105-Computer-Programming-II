#include<stdio.h>
int main()
{
	int num,x,i;
	printf("Enter registration number: ");
	scanf("%d",&num);
	printf("Prime digits in your registration number %d are:\n",num);
	for(i=0;i<8;i++)
	{
		x=num%10;
		num=num/10;
		if(x==2 or x==3 or x==5 or x==7)
		{
			printf("%d\n",x);
		}
	}
}
