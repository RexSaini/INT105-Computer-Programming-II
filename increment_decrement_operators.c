// Pre-increment/decrement and Post-increment/decrement
#include<stdio.h>
int main()
{
	int c,a=1,b=1,_a=15,_b=18;
	++a;   // Incremented by 1, pre-increment, so a=2
	printf("The updated value of a is %d",a);
	b++;   // Incremented by 1, post-increment, so b=2
	printf("\nThe updated value of b is %d",b);
	c=++a + b;   //First a is incremented to 3 then b is added so c=5
	printf("\nThe value of a=%d,b=%d,c=%d",a,b,c);
	c=a + b++;   //First a and b are added then b is incremented to 3 so c is 5 
	printf("\nThe value of a=%d,b=%d,c=%d",a,b,c);
	c=a-- + b--;  //First a and b are added then decrement will take palace so c=6
	printf("\nThe value of a=%d,b=%d,c=%d",a,b,c);
//Bistwise(&) and Bitwise or(|)
	printf("\n15 & 18 is %d",_a&_b);
	printf("\n18 | 18 is %d",_a|_b);
//Bitwise left shift(<<) and Bitwise right shift(>>)
	printf("\n15 << 1 is %d,18 << is %d",_a<<1,_b<<1);   //Shift the last bit to left, in << number is doubled
	printf("\n15 >> 1 is %d,18 >> is %d",_a>>1,_b>>1);   //Shift the last bit to right, in >> number is halved
}
