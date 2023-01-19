#include<conio.h>
#include<stdio.h>

void main()
{
    int a,b,i;
    printf("enter your no. for table= ");
    scanf("%d",&a);
    for(i=1;i<21;i++)
    {
        b=i*a;
        printf("\t%d\n",b);
    }
    getch();
}
