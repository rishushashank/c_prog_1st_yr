#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void bubble_sort(int a[],int n);

void main()
{
    int i,n,a[100];
    printf("enter the no. of element in an aaray=");
    scanf("%d",&n);
    printf("\nenter the element");
    for(i=0;i<n;i++)
    {
        scanf("\t%d",&a[i]);
    }
     for(i=0;i<n;i++)
      printf("\t%d",a[i]);
    bubble_sort(a,n);
    printf("\tafter the bubble sort\n");
    for(i=0;i<n;i++)
      printf("\n\t%d",a[i]);
      getch();
}
void bubble_sort(int a[],int n)
{
    int j,temp,r;
    for(r=1;r<=n-1;r++)
    {
        for(j=0;j<=n-1-r;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n After %d round of comparison and also",r-1);
}

