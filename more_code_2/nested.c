#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter the no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
         printf(" ");
        }
        for(k=0;k<=n-i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();

}
