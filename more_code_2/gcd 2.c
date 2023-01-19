#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,g,i,s,r;
      printf("enter two no.");
      scanf("%d %d",&a,&b);
      if(a>b)
      {
          g=a;
          s=b;
      }
      else
      {
          g=b;
          s=a;
      }
      while(r!=0)
      {
          r=g%s;
          g=s;
          s=r;
      }

            printf("hcf=%d",g);
      getch();

}
