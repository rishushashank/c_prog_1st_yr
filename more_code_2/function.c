#include<conio.h>
#include<stdio.h>
void main()
{
    int sqr(int),n,q;
    printf("enter the no. of the square=");
    scanf("%d",&n);
    q=sqr(n);
    printf(" square of the given no. is %d",q);
    getch();
}
int sqr(int x)
{
    int r;
    r=x*x;
return(r);
}

