#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void insertion(int a[],int n)
{
    int i,x,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(x=i-1;x>=0&&temp<a[x];x--)
           a[x+1]=a[x];
        a[x+1]=temp;

        }
    }


void main()
{
    int n,i,a[100];
    printf("enter the no. of element in array=");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n;i++)
       printf("\t%d",a[i]);
    insertion(a,n);
    printf("\nAfter selection sort\n\t");
    for(i=0;i<n;i++)
       printf("\t%d",a[i]);
    getch();
}
