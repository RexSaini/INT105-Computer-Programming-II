// Logical operators, Relational operators
#include <stdio.h>
int main()
{
    int age, exp;
    printf("The job offer will be given for age 21-25, experience 2 or more");
    printf("\nEnter your age ");
    scanf("%d", &age);
    printf("\nEnter your experience");
    scanf("%d", &exp);
    if ((age >= 21 && age <= 25) || ((age > 25 && age <= 50) && exp > 5))
    {
        if (exp >= 2)
        {
            printf("\nYou are eligible for job");
        }
        else
        {
            printf("\nNot eligible due to lack of experience");
        }
    }
    else if (age < 21)
    {
        printf("\nNot eligible due to low age");
    }
    else
    {
        printf("\nNot eligible due to high age");
    }
}
