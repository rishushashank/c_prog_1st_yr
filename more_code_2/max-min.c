#include<stdio.h>
 #include<conio.h>
  main()
   {
       int a[8],i,j,n,t;
       //clrscr();
        printf("Enter the array range:=> ");
         scanf("%d",&n);
          printf("\nEnter array element\n");
           for(i=0;i<n;i++)
                scanf("%d",&a[i]);

             for(i=0;i<n;i++)
             {
                 for(j=0;j<n;j++)
            {
                if(a[j]>=a[j+1])
             {
                 t=a[j];
                  a[j]=a[j+1];
            a[j+1]=t;
            }
             }
              }

            printf("\nMaximum value in the array:%d\n",a[n-1]);
             printf("\nMinimum value in the array:%d\n",a[0]);

 getch();
 }
