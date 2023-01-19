#include <conio.h>
#include<stdio.h>
#define size 100

int main()
{
    int n,a[size],i,j;
    float sum=0,avg;
    printf("Total no. of student=");
    scanf("%d",&n);
    printf("\n");
    printf("enter the marks of %d students=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
         for(i=0;i<n;i++)
         {
              if(a[i]<100)
              {
                  j=1;
              }
              if(a[i]>100)
              {
                  j=0;
                  break;
              }
         }
         if(j==1)
         {
            for(i=0;i<n;i++)
             sum=sum+a[i];

             printf("Sum of total marks obtained by student=%f",sum);
         avg=sum/n;
         printf("\navg. marks obtained by students=%f",avg);
         }
        if(j==0)
            printf("error input");

         getch();



}
