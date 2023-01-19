#include <conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node *next;
};
struct node *start=NULL;
struct node* myBlock()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
};

 void insrtatlast()
 {
     struct node *ptr,*t;
     ptr=(struct node*)malloc(sizeof(struct node));
     printf("Enter the value:");
     scanf("%d",&ptr->value);
     ptr->next=NULL;
     if(start==NULL)
        start=ptr;
     else
     {
       t=start;

       while(t->next!=NULL)
        t=t->next;

       t->next=ptr;
     }
 }
 void insrtatfirst()
{
     struct node *t,*t2;
     t=(struct node*)malloc(sizeof(struct node));
     printf("Enter the value:");
     scanf("%d",&t->value);
     if(start==NULL)
     {
         start=t;
         start->next=NULL;
     }
     else
     {
       t2=start;
       start=t;
       start->next=t2;

     }
}



 void display()
 {
     struct node *d;
     if(start==NULL)
        printf("node is empty\n");
     else
     {
       d=start;
       while(d!=NULL)
       {
           printf("\t%d",d->value);
           d=d->next;
       }
     }
 }

 int menu()
 {
     int ch;
     printf("\n1.Insert At First");
     printf("\n2.insrt at last");
     printf("\n3.Display");

     printf("\n4.Quite");
     printf("\n what you want to do:");
     scanf("\n%d",&ch);
     return (ch);
 }

 void main()
 {
    while(1)
        {
    switch(menu())
    {
        case 1:
             insrtatfirst();
             break;
        case 3:
            display();
            break;
        case 2:
          insrtatlast();
        case 5:
          exit(0);
        default:
            printf("Please enter the valid choice");
    }
        }
        getch();
 }
/* void dlt()
 {
     struct node *x;
     if(start==NULL)
        printf("node is empty\n");
     else
     {
         x=start;
         start=start->next;
         free(x);
     }
 }*/
