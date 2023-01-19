#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,r=0;
    printf("enter your no.=");
    scanf(" %d",&a);

    while(a!=0)
    {
    b=a%10;
    r=r*10+b;
    a=a/10;
    }

    printf("reverse no.=%d",r);
    getch();
}
