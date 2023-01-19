/*palindrome no.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0,d;
    printf("enter your no.");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }

    if(c==d)
    {
        printf("the no. is palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    getch();
    return 0;
}
