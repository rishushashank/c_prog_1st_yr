#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,n;
     printf("enter no. at which you find the even or odd no.= ");
     scanf("%d",&n);
     for(a=1;a<=n;a++)
     {
         if(a%2==0)
         {
             printf("even=%d\t",a);
         }
         else
         {
             printf("odd=%d\t",a);
         }
     }
     getch();
}
