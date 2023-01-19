#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void quicksort(int a[],int n)
{
    int i,j,temp,left,right;
    left=0;
    right=n-1;
    for(i=right;i<=left;i--)
    {
         if(a[left]>a[i])
       {
        temp=a[left];
        a[left]=a[right];
        a[right]=temp;
        left=i;
       }
       for(i=0;i<=left;i++)
       {
           if(a[i]>a[left])
           {
               temp=a[i];
               a[i]=a[left];
               a[left]=temp;
               left=i;
           }
       }
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
    quicksort(a,n);
    printf("\nAfter selection sort\n\t");
    for(i=0;i<n;i++)
       printf("\t%d",a[i]);
    getch();
}
