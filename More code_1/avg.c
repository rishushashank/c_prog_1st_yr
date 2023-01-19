#include<conio.h>
#include<stdio.h>
void main()
{
    int a[10],sum=0,i;
    float avg;
    printf("enter the elements of array");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    sum=sum+a[i];

    avg=sum/10;
    printf("sum of the given array=%d",sum);
    printf("avg of the given no. is %f",avg);
    getch();
}
