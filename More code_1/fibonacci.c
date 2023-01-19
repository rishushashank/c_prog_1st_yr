#include<conio.h>
#include<stdio.h>

void main()
{
    int i,j,n,a=0,b=1;
    printf("enter the no. at which u get fibonacci series=");
    scanf("%d",&n);
    printf("%d",a);
    printf("\t%d",b);
    for(i=0;i<n-2;i++)
    {
        j=a+b;
        printf("\t%d\t",j);
        a=b;
        b=j;
    }
    getch();
}
