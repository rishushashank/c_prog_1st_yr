#include<conio.h>
#include<stdio.h>

int main()
{
    int n,i,k;
    printf("enter the no. of row=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(k=1;k<=i;k++)
    {
        printf("*");
    }
    printf("\n");
    }
    getch();
}
