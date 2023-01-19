#include<stdio.h>
#include<conio.h>

void swap(int *i,int *j)
{
    int t;
    t=*i;
    *i=*j;
    *j=t;
}

void sorting(int a[],int n)
{
    int i,j,t;
    printf("before sorting of array:");

     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
     for(i=0;i<n-1;i++)
     {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {

               /*1>  normal swap
               t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;*/


                /*2>  using pointer*/
                swap(&a[j],&a[j+1]);

            }
        }

    }

     printf("\n");
     printf("after sorting of array:");
     for(i=0;i<n;i++)
        printf("%d",a[i]);

}





void main()
{
    int a[10],i,n,j,t;
    printf("enter the no. of element in a. ");
    scanf("%d",&n);
    printf("enter the element of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    sorting(a,n);

    getch();
}

