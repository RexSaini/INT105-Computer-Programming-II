#include<stdio.h>
float max(float a,float b,float c);

float max(float a,float b,float c)
{
	float highest;
	if(a>b and a>c)
	highest=a;
	else if(b>c)
	highest=b;
	else
	highest=c;
	return highest;
}

int main()
{
	float x,y,z;
	printf("\nEnter CA1 marks: ");
	scanf("%f",&x);
	printf("\nEnter CA2 marks: ");
	scanf("%f",&y);
	printf("\nEnter CA3 marks: ");
	scanf("%f",&z);
	printf("\nHighest marks in CA are:%0.2f",max(x,y,z));
}
