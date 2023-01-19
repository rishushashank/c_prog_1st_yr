#include<stdio.h>
#include<conio.h>
void main()

{
    int a,b,*p,c,**q;
    printf("enter two no. ");
    scanf("%d %d",&a,&b);
    c=(a+b);
    p=&c;
    printf("sum of %d and %d=%d\n",b,a,*p);
    printf("adress of c=%d\n",p);/*adress of c*/
    q=&p;
    printf("adress of p=%d\n",q);/*adress of p*/
    printf("adress of c=%d\n",*q);/*adress of c*/
    printf("value of c=%d\n",**q);/*value of c*/
    getch();

}
