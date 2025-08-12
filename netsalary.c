#include<stdio.h>
int main()
{
    float gs,a,d,ns;
    printf("enter your gross salary");
    scanf("%f",&gs);
    if(gs>10000)
    {
        a=(10*gs)/100;
        d=(3*gs)/100;
        ns=gs+a-d;
        printf("Your net salary is %f",ns);
    }
    if(gs>5000&&gs<10000);
    {
        a=(7*gs)/100;
        d=(2*gs)/100;
        ns=gs+a-d;
        printf("Your net salary is %f",ns);
    }
}
