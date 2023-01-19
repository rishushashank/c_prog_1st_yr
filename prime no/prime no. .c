#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,c=1;
    printf("enter your no.");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
       if(a%i==0)
           {
               c++;
           }
    }
            if(c==1)
                printf(" a prime no.");
            else
                printf("no. is not prime");
    getch();
    return 0;
}
