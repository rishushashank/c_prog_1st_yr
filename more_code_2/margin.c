/* NAME: RISHU KUMAR
   ROLL:19/IT/43
   UNIVERSITY ROLL NO.:00219043
   LAB ASSIGNMENT 1.

   Question.3> Write a program in c to merge two unsorted array.
   ANS:-
   */
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[100],b[100],i,x,y;
    printf("no. of element in a:");
    scanf("%d",&x);
    printf("no. of element in b:");
    scanf("%d",&y);
    printf("enter the element of array a:");
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    printf("enter the element of array a:");
    for(i=0;i<y;i++)
        scanf("%d",&b[i]);
    for(i=0;i<y;i++)
        a[x+i]=b[i];
    printf("merging the array a and array b\t\n");
    for(i=0;i<x+y;i++)
        printf("%d\t",a[i]);

    getch();
}
