#include<stdio.h>
#include<conio.h>
 void main()
 {
     float a,b,c;
     char z;
     printf("enter your first no.=");
     scanf("%f",&a);
     printf("\nenter your operation=");
     scanf(" %c",&z);
     printf("\nenter your second no.=");
     scanf("%f",&b);
     switch(z)
     {
         case '+':
            c=a+b;
         printf("sum=%f",c);
         break;
         case '-':
            c=a-b;
         printf("subtract=%f",c);
         break;
         case '*':
            c=a*b;
          printf("multiplicaton=%f",c);
         break;
         case '/':
             c=a/b;
         printf("divison=%f",c);
         break;

         default:
         printf("invalid input");
         }
     getch();
 }
