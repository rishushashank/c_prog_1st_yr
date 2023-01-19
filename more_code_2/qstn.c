#include<stdio.h>
#include<conio.h>
#define size 5

void main()
{
    int i,x,j,a[size],min,b[size];
    printf("enter the value of element");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    i=0;
    j=size-1;
    for(x=0;x<size;x++)
    {
        a[i]=b[j];
        i++;
        j--;
    }
    for(i=0;i<size;i++)
        printf("%d",&a[i]);
    for(i=0;i<size;i++)
        printf("%d",&b[i]);
    getch();
}

