/*INFIX NOTATION=A+(B*C-(D/E^)*G)*H CONVRT IN POSFIX NOTATION USING STACK.*/
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct arraystack
{
    int top;
    int capacity;
    int *array;
};

struct arraystack* createstack(int cap)
{
    struct arraystack* stack;
    stack=malloc(sizeof( struct arraystack));
    stack->capacity=cap;
    stack->top=-1;
    stack->array=malloc(sizeof(int)*stack->capacity);
    return (stack);
}
int isfull(struct arraystack* stack)
{
    return(stack->top==stack->capacity-1);
}
int isempty(struct arraystack* stack)
{
    return(stack->top==-1);
}
void push(struct arraystack* stack,int value)
{
    if(!isfull(stack))
    {
        stack->top++;
        stack->array[stack->top]=value;
    }
    else
        printf("stack is full");
}

int pop(struct arraystack* stack)
{
    int item;
    if(!isempty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
        return(item);
    }
    else
    {
      printf("stack is empty");
      return(-1);

    }
}

void main()
{
    int value,cap,choice;
    struct arraystack* s;
    printf("enter the capacity of stack");
    scanf("%d",&cap);
    s=createstack(cap);
    while(1)
    {
        printf("1>.push\n");
        printf("2>.pop\n");
        printf("3>.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value you want push");
            scanf("%d",&value);
            push(s,value);
            break;
        case 2:
            value=pop(s);
            if(value==-1)
                printf("stack is empty");
            printf("poped value is %d \n",value);
            break;
        case 3:
            exit(0);

        }
    }
    getch();
}
