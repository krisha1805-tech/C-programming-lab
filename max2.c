#include<stdio.h>
int main()
{
   printf("Enter two numbers\n");
   int a,b;
   scanf("%d %d",&a,&b);
   if(a>b)
   {
       printf("%d is maximum\n",a);
       printf("%d is minimum",b);
   }
   else
   {
       printf("%d is maximum\n",b);
       printf("%d is minimum",a);
   }
}
