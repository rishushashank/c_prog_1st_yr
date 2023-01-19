#include<conio.h>
#include<stdio.h>
void main()
{
    int a[100],i,j,n,k=0;
    printf("enter the value of no=");
    scanf("%d",&n);
    printf("\nenter the no. you have=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nenter the no. you want to find out=");
    scanf("%d",&j);
     for(i=0;i<n;i++)
     {
         if(j==a[i])
         {
            k++;
             printf(" \nits position is %d.",i+1);
             }
     }
    printf("\n\ntotal no of the %d in the given list is=%d times",j,k);
    getch();
}
