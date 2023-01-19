/*armstrong */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0,d;
    printf("enter your no.\n");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        b=a%10;
        c=c+b*b*b;
        a=a/10;
    }
    if(c==d)
        printf("the no. is armstrong");
    else
        printf("no. is not armstrong");
    getch();
    return 0;
}
