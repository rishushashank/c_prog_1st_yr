#include<stdio.h>
#include<conio.h>
void main()
{
    int a,n,c=0;
    printf("enter the no.");
    scanf("%d",&a);
    for(n=2;n<a;n++)
    {
        c==a%n;
    }
     if(c==0)
            printf("%d is a prime no.",a);
        else
            printf("%d is not a prime no.",a);
    getch();
}
