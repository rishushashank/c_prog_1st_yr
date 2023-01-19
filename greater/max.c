#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],max,n,i,pos;
    printf("enter the total no.= ");
    scanf("%d",&n);
    printf("enter the value");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<=a[i])
           {
            max=a[i];
            pos=i;
           }
    }
    printf("maximum=%d\n",max);
    printf("its position=%d",pos+1);
    getch();
}
