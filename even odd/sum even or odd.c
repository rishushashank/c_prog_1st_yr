#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s=0,o=0,r;

    printf("enter your at which you get the sum of odd or sum of even no.= ");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        if(r%2==0)
        {
            s=s+r;
        }
        else
        {
            o=o+r;
        }
    }
    printf("sum of even no.=%d\n",s);
    printf("sum of odd no.=%d",o);
    getch();

}
