#include<stdio.h>
int main()
{
   printf("Enter number\n");
   int number;
   scanf("%d",&number);
   if(number%2==0)
    {
        printf("Number is Even");
    }
   else
    {
        printf("Number is Odd");
    }
}
