#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

struct node
{
int value;
struct node *next;
};
struct node *head=NULL;
struct node* create()
{
   struct node *t;
   t=(struct node *)malloc(sizeof(struct node));
   return(t);
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("node is empty");
    }
    else
    {
        temp=head->next;
        do
        {
            printf("%d",temp->value);
            temp=temp->next;
        }
        while(temp!=head->next);
    }
}

void addtoempty(int n)
{
  struct node *t;
  t=create();
  t->value=n;
  t->next=t;
  head=t;
}

void addtobeg(int n)
{
    if(head==NULL)
        addtoempty(n);
    else
        {
    struct node *temp,*t;
    t=create();
    t->value=n;
    t->next=head->next;
    head->next=t;
    }


}
void addtolast(int n)
{
     if(head==NULL)
        addtoempty(n);
        else
        {
    struct node *t,*temp;
    t=create();
    t->value=n;
    temp=head->next;
    while(temp!=head)
    {
        temp=temp->next;
    }
    temp->next=t;
    head=t;
        }
}

int main()
{
    int n,s;
    while(1)
    {
        printf("enter the value");
    scanf("%d",&n);
    printf("\n1.DISPLAY");
    printf("\n2. addtoEMPTY");
    printf("\n3. addtoBEG");
    printf("\n4. LAST");
    printf("\n5. exit");
    printf("\nwhat you want to execute");
    scanf("%d",&s);
    switch(s)
    {
    case 1:
        display();
        break;
    case 2:
        addtoempty(n);
        break;
    case 3:
        addtobeg(n);
        break;
    case 4:
        addtolast(n);
        break;
    case 5:
        exit(0);
    default:
        printf("defauilt input");
    }

    }
    return 0;
}
