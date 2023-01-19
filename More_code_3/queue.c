#include <stdio.h>

#define MAX 20


struct queue
{
  int arr[MAX];
  int rear;
  int front;
};
struct queue q;
void insert();
void Delete();
void display();
void main()
{
    int choice;
    q.rear=-1;
    q.front=-1;
    printf(" Stack operations you can perform :\n");
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
    return ;
}

void insert()
{
    int x;
    if (q.rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (q.front == - 1)
        q.front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &x);
        q.rear = q.rear + 1;
        q.arr[q.rear] = x;
    }
}

void Delete()
{
    if (q.front == - 1 || q.front > q.rear)
    {
        printf("Queue Underflow \n");
    }
    else
    {
        printf("Element deleted from queue is : %d\n", q.arr[q.front]);
        q.front = q.front + 1;
    }
}

void display()
{
    int i;
    if (q.front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = q.front; i <= q.rear; i++)
            printf("%d ", q.arr[i]);
        printf("\n");
    }
}
