#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4][4],n,i;
    printf("enter the value of matrix\n ");
    for(i=0;i<4;i++)
        for(n=0;n<4;n++)
          scanf("%d",&a[i][n]);
          printf("a matrix is\n");
    for(i=0;i<4;i++)
        for(n=0;n<4;n++)
            printf("%d\t",a[i][n]);

    getch();
}
