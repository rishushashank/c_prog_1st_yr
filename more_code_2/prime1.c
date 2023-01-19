#include<conio.h>
#include<stdio.h>
void main()
{
    int a,n,i,c=1;
    printf("enter the no.at which you want to prime no.");
    scanf("%d",&a);
    for(n=2;n<a;n++)
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
              c++;
            }
        }
        if(c==3)
            printf("%d\n",n);
        c=1;
    }
    getch();


}
