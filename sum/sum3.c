#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i,sum=0;
    float avg;
    printf("enter your 10 no.");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d\n",sum);
    avg=sum/10;
    printf("average=%f",avg);
    getch();
}
