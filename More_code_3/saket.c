/* NAME :SAKET KUMAR
   ROLL NO : 19 /IT /45
   UNIVERSITY ROLL NO :00219045
   Q1. WAP in linked list to
   1.Delete from start
   2.Delete from end
   3.Delete in between */
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void create();
void delete_start();
void delete_end();
void delete_between();
void display();
int main()
{
    int choice;
    printf("  linked lists operations you can perform :\n");
    printf(" 1.CREATE\n");
    printf(" 2.DELETE FROM START\n");
    printf(" 3.DELETE FROM LAST\n");
    printf(" 4.DELETE FROM BETWEEN\n");
    printf(" 5.DISPLAY\n");
    printf(" 6.EXIT\n");
    do
    {
        printf(" Enter the Choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                create();
                break;
            }
            case 2:
            {
                delete_start();
                break;
            }
            case 3:
            {
                delete_end();
                break;
            }
            case 4:
            {
                delete_between();
                break;
            }
            case 5:
            {
                display();
                break;
            }
            case 6:
            {
                printf("EXIT \n");
                break;
            }
            default:
            {
                printf ("Invalid choice! \n");
            }

        }
    }while(choice!=6);
    return 0;
}
void create()
{
    int n;
    printf("enter the number of nodes in list:\n");
    scanf("%d", &n);
    struct node *new, *temp;
    int value, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Enter data of node 1: ");
        scanf("%d", &value);
        head->data = value;
        head->next = NULL;
        temp = head;
        for(i=2; i<=n; i++)
        {
             new= (struct node *)malloc(sizeof(struct node));
            if(new == NULL)
            {
                 printf("Memory not allocated\n");
                 break;
            }
            else
            {
                 printf("Enter the data of node %d: ", i);
                 scanf("%d", &value);
                 new->data = value;
                 new->next = NULL;
                 temp->next = new;
                 temp = temp->next;
            }
        }
     }
}


void delete_start()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        head = temp->next;
        free(temp);
        printf("Node deleted!\n");
    }
}

void delete_end()
{
    struct node *temp,*new;
    if(head == NULL)
    {
        printf("list is empty\n");
    }
    else if(head -> next == NULL)
    {
        free(head);
        head=NULL;
        printf("Only one node, deleted!\n");
    }

    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            new = temp;
            temp = temp->next;
        }
        new->next = NULL;
        free(temp);
        printf("Node deleted!\n");
    }
}
void delete_between()
{
    struct node *temp,*new;
    int pos,i;
    printf("Enter the position of the node after to be deleted : \n");
    scanf("%d",&pos);
    temp=head;
    for(i=0;i<pos;i++)
    {
        new = temp;
        temp = temp->next;

        if(temp == NULL)
        {
            printf("Cannot delete\n");
        }
    }
    new->next = temp->next;
    free(temp);
    printf("Deleted node %d!\n",pos+1);
}
void display()
{
     struct node *temp;
     if(head == NULL)
     {
         printf("List is empty.");
     }
     else
     {
         temp = head;
         while(temp != NULL)
         {
             printf("%d\t", temp->data);
             temp = temp->next;
         }
         printf("\n");
     }
}



/* NAME :SAKET KUMAR
   ROLL NO : 19 /IT /45
   UNIVERSITY ROLL NO :00219045
   Q2. WAP to insert a node in a singular linked list
        1. At start
        2. At end
        3. At any position in between .

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void create(int n);
void insert_start(int element);
void insert_end(int element);
void insert_between(int element,int position);
void display();
int main()
{
    int n, data, data1, data2, pos;
    printf("Enter total number of nodes:\n");
    scanf("%d", &n);
    create(n);
    printf("The List is:\n");
    display();
    printf("Enter data to insert at beginning of the list:\n");
    scanf("%d", &data);
    insert_start(data);
    printf("The List is:\n");
    display();
    printf("Enter data to insert at end of the list: ");
    scanf("%d", &data1);
    insert_end(data1);
    printf("The List is \n");
    display();
    printf("enter the position :\n");
    scanf("%d", &pos);
    printf("Enter data to insert at position %d of the list: ",pos);
    scanf("%d", &data2);
    insert_between(data2, pos);
    printf("The List is:\n");
    display();
    return 0;
}
void create(int n)
{
    struct node *new, *temp;
    int value, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Enter data of node 1:\n ");
        scanf("%d", &value);
        head->data = value;
        head->next = NULL;
        temp = head;
        for(i=2; i<=n; i++)
        {
             new= (struct node *)malloc(sizeof(struct node));
            if(new == NULL)
            {
                 printf("Memory not allocated\n");
                 break;
            }
            else
            {
                 printf("\nEnter the data of node %d: ", i);
                 scanf("%d", &value);
                 new->data = value;
                 new->next = NULL;
                 temp->next = new;
                 temp = temp->next;
            }
        }
     }
}


void insert_start(int element)
{
     struct node* temp = (struct node*)malloc(sizeof(struct node));
     temp -> data = element;
     temp -> next = head;
     head = temp;
}
void insert_end(int element)
{
     struct node *new, *temp;
     new = (struct node*)malloc(sizeof(struct node));
     if(new == NULL)
     {
         printf("Memory not allocated\n");
     }
     else
     {
         new->data = element;
         new->next = NULL;
         temp = head;
         while(temp->next != NULL)
         {
            temp = temp->next;
         }
         temp->next = new;
     }
}
void insert_between(int element, int position)
{
     int count = 1;
     struct node *new, *temp;
     new = (struct node*)malloc(sizeof(struct node));
     if(new == NULL)
     {
         printf("Memory not allocated\n");
     }
     else
     {
         temp = head;
         while(temp->next != NULL && ((position - 1) != count))
         {
             temp = temp->next;
             count = count + 1;
         }
         if( (position - 1) == count)
         {
             new->data = element;
             new->next = temp->next;
             temp->next = new;
         }
     }
}
void display()
{
     struct node *temp;
     if(head == NULL)
     {
         printf("List is empty.");
     }
     else
     {
         temp = head;
         while(temp != NULL)
         {
             printf("%d\t", temp->data);
             temp = temp->next;
         }
         printf("\n");
     }
}


 NAME :SAKET KUMAR
   ROLL NO : 19 /IT /45
   UNIVERSITY ROLL NO :00219045
   Q1. WAP to create and display singular linked list in c.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;
void create(int n);
void display();

int main()
{
    int n;
    printf("enter number of nodes :\n");
    scanf("%d", &n);
    create(n);
    printf(" Data entered in the list : \n");
    display();
    return 0;
}
void create(int n)
{
    struct node *new, *tmp;
    int value, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
        printf(" Memory not allocated\n");
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &value);
        head->data = value;
        head->next = NULL;
        tmp = head;
        for(i=2; i<=n; i++)
        {
            new = (struct node *)malloc(sizeof(struct node));
            if(new == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &value);
                new->data = value;
                new->next = NULL;
                tmp->next = new;
                tmp = tmp->next;
            }
        }
    }
}
void display()
{
    struct node *tmp;
    if(head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = head;
        while(tmp != NULL)
        {
            printf("%d\n", tmp->data);
            tmp = tmp->next;
        }
    }
}

*/












