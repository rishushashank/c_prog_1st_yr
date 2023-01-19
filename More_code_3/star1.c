#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k;
    printf("no. of rows at which you get star");
    scanf("%d",&k);
    for(i=k;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
           printf("*");
        }
        printf("\n");
    }
    getch();
}
