#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a=0,b=1,c,i;

    printf("enter no's. of turn\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",a);
    }
    else

        if(n==2)
      {
        printf("%d\t%d",a,b);
      }
        else
printf("%d\t%d\t",a,b);
          for(i=0;i<n-2;i++)
         {
            c=a+b;
            printf("%d\t",c);
            a=b;
            b=c;
         }
getch();
    }


