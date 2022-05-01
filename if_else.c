#include<stdio.h>
int main()
{
	char ans;
	float attendance;
	printf("Have you paid fee, press y or n: ");
	scanf("%c",&ans);
	if(ans == 'y' or ans == 'Y')
	{
		printf("\nWhat is your attendance:");
		scanf("%f",&attendance);
		if(attendance >= 75 && attendance <= 100)
		{
			printf("\nYou can appera in exam");
		}
		else if(attendance < 75 && attendance >=0)
		{
		printf("\nNot allowed for exams due to low attendance");
		}
		else if(ans == 'n' or ans =='N')
		{
		printf("\nNot allowed to appear in exam due to pending fee");
		}
		else
		{
			printf("\nInvalid input");
		}
    }
}

