/* NAME :ANKIT KUMAR
   ROLL NO : 19 /IT/06
   UNIVERSITY ROLL NO : 00219006

   Q3>. Write a program in C to perform circular queue implementation using array.(insert,delete,display).

*/
#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=-1,rear=-1;
int CQueue[max];
void insert();
int delete();
void display();
main()
{
    int choice;
    printf(" queue operations you can perform :\n");
    printf(" 1.INSERT\n 2.DELETE\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf(" Enter the Choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                delete();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("EXIT \n");
                break;
            }
            default:
            {
                printf (" Please Enter a Valid Choice(1/2/3/4)\n");
            }

        }
    }while(choice!=4);
}

void insert()
{
    int x;
    if((front ==0 && rear == max-1) || front == rear+1)
    {
        printf("Circular Queue Is Full !\n");
    }
    printf("Enter a number to Insert :");
    scanf("%d",&x);
    if(front==-1)
        front=front+1;
    if(rear==max-1)
        rear=0;
    else rear=rear+1;
        CQueue[rear]=x;
}

int delete()
{
    int d;
    if(front==-1)
    {
        printf("The Circular Queue is Empty !!\n");
    }
    d=CQueue[front];
    if(front==max-1)
        front=0;
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else front=front+1;
    printf("%d was deleted !\n",d);
    return d;
}

void display()
{
    int i;
    if(front==-1)
    {
        printf("\nThe Circular Queue is Empty ! Nothing To Display !!\n");
    }
    i=front;
    if(front<=rear)
    {
        printf("\n\n");
        while(i<=rear)
            printf("%d ",CQueue[i++]);
        printf("\n");
    }
    else
    {
        printf("\n\n");
        while(i<=max-1)
           printf("%d ",CQueue[i++]) ;
        i=0;
        while(i<=rear)
            printf("%d ",CQueue[i++]);
    }
}



     /* NAME : SAKET KUMAR
   ROLL NO : 19 /IT!/45
   UNIVERSITY ROLL NO : 00219045

*/

/* NAME :SAKET KUMAR
   ROLL NO : 19 /IT /45
   UNIVERSITY ROLL NO :00219045 */
