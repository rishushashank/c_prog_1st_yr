#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    char j;
    printf("no. of albhabates you want to print");
    scanf("%d",&n);
     start:
    for(i=1;i<=n;i++)
    {
        j=64+i;
        printf("%c\t",j);
    }
    getch();
}
