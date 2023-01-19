#include<stdio.h>
#include<conio.h>

void main()
{
  int a=5;
  int *p,*r;
  p=&a;
  r=&a;
  printf("%d\n",*p);
  printf("%d\n",&p);
  printf("%d\n",p);
   printf("%d\n",*r);
  printf("%d\n",&r);
  printf("%d\n",r);
getch();
}
