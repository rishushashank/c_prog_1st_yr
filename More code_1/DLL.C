// DOUBLE LINKED list

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node *start=NULL;
struct node
{
    struct node *prev;
    int value;
    struct node *next;
};


struct node* mynode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);

}

void insrtfirst()
{
    struct node *t;
    t=mynode();
    printf("enter the value");
    scanf("%d",&t->value);
    t->prev=NULL;
    start->prev=t;
    t->next=start;
    start=t;

}
void insrtlast()
{
    struct node *t,*temp;
    t=mynode();
    printf("enter the value");
    scanf("%d",&t->value);
    t->next=NULL;
    if(start==NULL)
    {
        start=t;
    }
    else
    {
    temp=start;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=t;
    t->prev=temp;
    }
}
void display()
{
    struct node *a;
    if(start==NULL)
    {
        printf("node is empty");
    }
    else{
          a=start;
          while(a!=NULL)
          {
              printf("%d\t",a->value);
              a=a->next;
          }


    }
}
void displayy()
{
    struct node *a,*x;
    if(start==NULL)
    {
        printf("node is empty");
    }
    else
    {
        while(start->next!=NULL)
        {
            start=start->next;
        }
        a=start;
        while(a!=NULL)
        {
            printf("%d\t",a->value);
            a=a->prev;
        }


    }
}


    int main()
    {
        int c;
        while(1)
        {
            printf("\n1>insrtfirst");
            printf("\n2>display");
            printf("\n3>displayR");
            printf("\n4>insrtlast");
             printf("\n5>exit");
            printf("\nenter the choice:");
            scanf("%d",&c);
            switch(c)
            {
                case 1:
                    insrtfirst();
                    break;
                case 2:
                    display();
                    break;
                case 3:
                    displayy();
                    break;
                case 4:
                    insrtlast();
                    break;
                case 5:
                    exit(0);
                default:
                    printf("enter the valid input");

            }

        }
        return 0;
    }
