/* NAME: RISHU KUMAR
   ROLL:19/IT/43
   UNIVERSITY ROLL NO.:00219043
   LAB ASSIGNMENT 2.

   Question.1> Write a program in c to search element in an array using Binary search algorithm.
   ANS:-
   */
   #include <stdio.h>
 #include<conio.h>
void main()
{
int i, l, h, m, n, k, a[100];
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter the sorted elements in integers");
for(i = 0; i < n; i++)
scanf("%d",&a[i]);
printf("Enter value to find");
scanf("%d", &k);
l = 0;
h= n - 1;
m= (l+h)/2;
while (l <= h) {
if(a[m] < k)
l = m + 1;
else
 if (a[m] == k) {
printf("%d found at location %d.n", k, m+1);
break;
}
else
h= m-1;
m= (l + h)/2;
}
if(l> h)
printf("Not found! %d isn't present in the list.", k);
getch();
}
/*
 #include<stdio.h>
 #include<conio.h>

void main()
{
    int a[20],i,x,n;
    printf("How many elements you have?\t\t");
    scanf("%d",&n);

    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element you want to search:");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            break;
        }
    if(i<n)
        printf("Element found at index %d and position %d",i,i+1);
    else
        printf("Element not found");

   getch();
}
*/





