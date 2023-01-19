#include<conio.h>
#include<stdio.h>

void main()
{
    int a,b,c,d;
    printf("enter three no.");
    scanf("%d %d %d",&a,&b,&c);
    d=(a==b&&b==c);
    printf("result=%d",d);
    getch();
}
