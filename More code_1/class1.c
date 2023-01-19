/*enter the elements into the array*/
#include<conio.h>
#include<stdio.h>
void main()
{
    int arr[30],n,i;
    printf("enter the no. of elements that you want to insert into the array");
    scanf("%d",&n);
    printf("enter the elements\n");
     for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
     for(i=0;i<n;i++)
        printf("%d",arr[i]);
      printf("enter the position:");
    scanf("%d",&n);
    printf("enter the no.:");
    scanf("%d",&p);
    for(i=n;i>=n;i--)
    {
         a[i]=a[i-1];
    }
    a[n-1]=p;

    for(i=0;i<=b;i++)
    {
         printf("%d",a[i]);
    }
    getch();
}
