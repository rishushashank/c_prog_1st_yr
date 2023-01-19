#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,i;

    printf("enter your no. at which you want to add=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of continuous %d no. is %d.",n,sum);
    getch();
}
