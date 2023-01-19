#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i;
    float sum=0,a;
    printf("enter the value of n=");
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n;i++)
    {
        printf("+ 1/%d",i);
    }
    for(i=2;i<=n;i++)
    {
        a=1/i;
        sum=sum+a;
    }
    printf("=%f",sum+1);
    getch();

}
