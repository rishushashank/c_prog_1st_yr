#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,max;

    printf("enter your five no.\n");
    scanf(" %d %d %d %d %d\n",&a,&b,&c,&d,&e);
    if(a>b&&a>c&&a>d&&a>e)
    {
       max=a;
    }
    else
    {


        if(b>c&&b>d&&b>e)
    {
        max=b;
    }
    if(c>d&&c>e)
    {
        max=c;
    }
    if(d>e)
    {
        max=d;
    }
    else
    {
        max=e;
    }
    }
    printf("%d is greater",max);
    getch();
    return 0;

}
