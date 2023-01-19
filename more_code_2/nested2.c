#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,k,r=0;
    printf("enter the no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n+r;j++)
        {
         printf(" ");
        }
        for(k=0;k<=n-i;k++)
        {
            printf("*");
        }
        printf("\n");
            r++;
    }
    getch();

}
