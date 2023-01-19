#include<stdio.h>
#include<conio.h>

void main()
{
    int n,j,i,s=1;
    printf("enter no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",s);
            s=s+1;
        }
        printf("\n");
    }
    getch();
}
