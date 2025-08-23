//find out largest and smallest of two values

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("Largest number = %d\n", num1);
        printf("Smallest number = %d\n", num2);
    }
    else if(num2 > num1)
    {
        printf("Largest number = %d\n", num2);
        printf("Smallest number = %d\n", num1);
    }
    else
    {
        printf("Both numbers are equal: %d\n", num1);
    }
    return 0;
}
