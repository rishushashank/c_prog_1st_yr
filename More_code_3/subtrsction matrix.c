#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][4],b[3][4],c[3][4],i,j;

    printf("enter the element of matrix A");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        printf("enter the element of matrix b");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }

    getch();
}
