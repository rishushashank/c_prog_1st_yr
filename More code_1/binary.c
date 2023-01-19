#include<conio.h>
#include<stdio.h>
void main()
{
    int a,i,n;
    printf("enter the no.");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d",(n%2));
        n=n/2;

    }
    getch();
}
