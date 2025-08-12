#include<stdio.h>
int main()
{
   printf("Enter three numbers\n");
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a>b)
   {
       printf("%d is greatest",a);
   }
   else
    if(b>c)
   {
       printf("%d is greatest",b);
   }
   else
   {
       printf("%d is greatest",c);
   }
}
