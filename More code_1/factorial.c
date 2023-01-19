#include<conio.h>
#include<stdio.h>

void main()
{
    int n,i,mul=1;

    printf("enter the no.= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    printf("factorial of %d is=%d",n,mul);
    getch();
}
