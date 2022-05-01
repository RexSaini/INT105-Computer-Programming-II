#include<stdio.h>
int main()
{
	int _x=10,a=1,b=1,c;
    char _c='A';
    printf("The size of x is %d",sizeof(_x));
    printf("\nThe size of c is %d",sizeof(_c)); 
    printf("\nThe initial value of a is %d",a);
    ++a;
    printf("\nThe value of a after pre-increment is%d",a);
	a++;
	printf("\nThe value of a after post-increment ia %d",a);
	c=++a+b;
	printf("\nThe result of addition is %d, value of a is %d, value of b is %d",c,a,b);
	c=a+b++;
	printf("\nThe value of c is %d, value of b is %d",c,b);
	return 0;
}
