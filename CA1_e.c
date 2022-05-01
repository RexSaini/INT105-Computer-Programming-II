#include<stdio.h>
int main()
{
	int product=1,num;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num>=0)
	{
		product=product*num;
		printf("\nEnter a number: ");
		scanf("%d",&num);
	}
	printf("\nThe product is: %d",product);
}
