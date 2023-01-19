#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("no. of rows you  want= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=i;j++)
            printf("%d",j);
        printf("\n");
    }
    getch();
}
