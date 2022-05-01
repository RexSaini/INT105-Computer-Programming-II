#include<stdio.h>
int main()
{
	int i,a,b,c,d,e,f,g,p=0,q=0,r=0,s=0,t=0,u=0,v=0,bill;
	char x,y;
	printf("1.Sugar = Rs37 per kg");
	printf("\n2.Rice = Rs62 per kg");
	printf("\n3.Chikpeas = Rs82 per kg");
	printf("\n4.Walnut = Rs400 per pack of 500gm");
	printf("\n5.Almond = Rs600 per pack of 250gm");
	printf("\n6.Mustard oil = Rs115 per pack of 1lt");
	printf("\n7.Wheat flour = Rs250 per pack of 10kgs");
	printf("\nIf you wish to buy press Y if not then press N: ");
	scanf("%c",&x);
	while(x=='Y' || x=='y')
	{
		printf("\nEnter the product number: ");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				printf("\nEnter the qunatity of Sugar in kgs: ");
				scanf("%d",&a);
				p=a*37;
				break;
			case 2:
				printf("\nEnter the qunatity of Rice in kgs: ");
				scanf("%d",&b);
				q=b*62;
				break;
			case 3:
				printf("\nEnter the qunatity of Chikpeas in kgs: ");
				scanf("%d",&c);
				r=c*82;
				break;
			case 4:
				printf("\nEnter the qunatity of Walnut in packs: ");
				scanf("%d",&d);
				s=d*400;
				break;
			case 5:
				printf("\nEnter the qunatity of Almond in packs: ");
				scanf("%d",&e);
				t=e*600;
				break;
			case 6:
				printf("\nEnter the qunatity of Mustard oil in packs: ");
				scanf("%d",&f);
				u=f*115;
				break;
			case 7:
				printf("\nEnter the qunatity of Wheat flour in packs: ");
				scanf("%d",&g);
				v=g*250;
				break;
			default:
				printf("\nInvalid Input");
		}
		printf("\nIf you wish to continue shopping press Y if not then press N: ");
		scanf("\n%c",&y);
		if(y=='Y' or y=='y')
		{
			x='Y';
		}
		else
		{
			x='N';
		}
	}
	bill=p+q+r+s+t+u+v;
	printf("\nTotal bill is Rs%d",bill);
}
