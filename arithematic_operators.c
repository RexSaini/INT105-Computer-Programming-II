#include <stdio.h>
int main()
{
    // To perform the addition of two variables
    int num1, num2, result;
    printf("Enter two values");
    scanf("%d%d", &num1, &num2);
    result = num1 + num2;
    printf("\nThe addition is %d", result);
    result = num1 - num2;
    printf("\nThe subtraction is %d", result);
    result = num1 / num2;
    printf("\nThe division by / operator is %d", result);
    result = num1 % num2;
    printf("\nThe division by modulus operator is %d", result);
    if (num1 > num2)
    {
        printf("\n%d is greater than %d", num1, num2);
    }
    else if (num1 == num2)
    {
        printf("\nBoth numbers are equal");
    }
    else
    {
        printf("\n%d is greater than %d", num2, num1);
    }

    // Short hand assignment operator
    num1 += 10;
    printf("\nThe updated value of num1 after adding 10 is %d", num1);
    printf("\nThe size of num1 in memory in bytes is %d", sizeof(num1));
    return 0;
}
