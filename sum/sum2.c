#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter the no. at which you want to odd no.");
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n;i++)
    {
        if(i%2!=0)
        {
           printf("+%d",i);
           sum=sum+i;
        }
    }
    printf("=%d",sum+1);
    printf("\n sum=%d",sum+1);
    getch();
}
