#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,g,i,s;
      printf("enter two no.");
      scanf("%d %d",&a,&b);
      g=a>b?a:b;
      for(i=g;i>=1;i--)
      {
          if(a%i==0&&b%i==0)
            break;
      }
      printf("hcf=%d",i);
      getch();

}
