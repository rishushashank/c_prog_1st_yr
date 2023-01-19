#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s=0,c=0,i,j;

    printf("enter no. at which you want the sum of no.=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                s=s+1;
            }
        }
         if(s==2)
        {
            c=c+i;
        }
        s=0;
    }

    printf("sum of prime no. is= %d",c);
    getch();

}
/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j,c=0,s=0;

    printf("enter the no. at which you want to get prime no.");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==2)
            s=s+i;
            c=0;
    }
    printf("sum of prime no is= %d",s);
    getch();
;}
*/
