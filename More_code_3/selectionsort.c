#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int selection(int a[],int x,int n)
{
    int min,i,z;
    min=a[x];
    z=x;
    for(i=x+1;i<n;i++)
    {
        if(min>a[i])
        {
          min=a[i];
          z=i;
        }
    }
    return(z);
}

void main()
{
    int a[]={10,20,5,4,8,6} ;
    int temp,min,i;
    for(i=0;i<=4;i++)
    {
       min=selection(a,i,6);
       temp=a[i];
       a[i]=a[min];
       a[min]=temp;;
    }
    for(i=0;i<6;i++)
        printf("%d\t",a[i]);
   getch();
}
