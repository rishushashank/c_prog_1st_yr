/* sum of the digit of given no.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0;
    printf("enter your no.\n");
    scanf("%d",&a);
    while( a!=0)
    {
        b=a%10;
        c=c+b;
        a=a/10;
    }
    printf("sum of digit of the no.= %d",c);
    getch ();
    return 0;
}
