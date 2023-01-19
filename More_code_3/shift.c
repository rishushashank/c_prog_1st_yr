/* NAME: RISHU KUMAR
   ROLL:19/IT/43
   UNIVERSITY ROLL NO.:00219043
   LAB ASSIGNMENT 1.

   Question.1> Write a program in c to insert an element in a given location in a array.
   ANS:-
   */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,p,a[100],b;
   printf("enter the no. of elements that you want to insert into the array");
    scanf("%d",&b);
    printf("enter the element:");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position:");
    scanf("%d",&n);
    printf("enter the no.:");
    scanf("%d",&p);
    for(i=b;i>=n;i--)
    {
         a[i]=a[i-1];
    }
    a[n-1]=p;

    for(i=0;i<=b;i++)
    {
         printf("%d\n",a[i]);
    }
getch();
}
