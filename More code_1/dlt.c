/* NAME: RISHU KUMAR
   ROLL:19/IT/43
   UNIVERSITY ROLL NO.:00219043
   LAB ASSIGNMENT 1.

   Question.2> Write a program in c to delete an element from a given location in array.
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
    for(i=n-1;i<b;i++)
    {
         a[i]=a[i+1];
    }

    for(i=0;i<b-1;i++)
    {
         printf("%d\n",a[i]);
    }
getch();

}
