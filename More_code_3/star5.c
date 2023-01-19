#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;       /*a=65* ask value*/

    printf("entr your no of rows");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }
    getch();
}
