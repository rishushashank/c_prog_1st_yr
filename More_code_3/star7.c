#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;

    printf("enter the no. of row=  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<i;j++)
        {
          printf("*");
        }
        printf("\n");
    }
    getch();
}
