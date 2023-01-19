/*NAME:RISHU KUMAR
ROLL NO.:19/IT/43

QUESTION:WRITE A PROGARM IN C TO PERFOME STACK IMPLEMENTATION USING ARRAY.(PUSH,PO,TRAVERS/DISPLAY).
*/
#include<stdio.h>
int stack[20],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
    top=-1;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf(" Stack operations you can perform :\n");
    printf(" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf(" Enter the Choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
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
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("tSTACK is over flow\n");
    }
    else
    {
        printf(" Enter a value to be pushed:\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf(" Stack is under flow\n");
    }
    else
    {
        printf(" The popped elements is %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf(" The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("%d\n",stack[i]);
    }
    else
    {
        printf(" The STACK is empty\n");
    }

}


















/*
#include<stdio.h>
int stack[20],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
    top=-1;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf(" Stack operations you can perform :\n");
    printf(" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf(" Enter the Choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
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
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("tSTACK is over flow\n");
    }
    else
    {
        printf(" Enter a value to be pushed:\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf(" Stack is under flow\n");
    }
    else
    {
        printf(" The popped elements is %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf(" The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("%d\n",stack[i]);
    }
    else
    {
        printf(" The STACK is empty\n");
    }

}




















/*

#include<stdio.h>
int stack[20],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
    top=-1;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf(" Stack operations you can perform :\n");
    printf(" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf(" Enter the Choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
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
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("tSTACK is over flow\n");
    }
    else
    {
        printf(" Enter a value to be pushed:\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf(" Stack is under flow\n");
    }
    else
    {
        printf(" The popped elements is %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf(" The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("%d\n",stack[i]);
    }
    else
    {
        printf(" The STACK is empty\n");
    }

}



[17:40, 9/20/2020] Saket P***U Hit: #include <stdio.h>
#define MAX 5
struct Stack
{
    int stk[MAX];
    int top;
};
struct Stack s;
void push();
void pop();
void display();
void main ()
{
    int choice;
    s.top = -1;
    printf(" Stack operations you can perform :\n");
    printf(" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf("Enter the Choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
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
    }
    while(choice!=4);
    return 0;
}

void push ()
{
    int num;
    if (s.top == (MAX - 1))
    {
        printf ("STACK is Full\n");
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
}

void pop ()
{
    if (s.top == -1)
    {
        printf ("STACK is Empty\n");
        return (s.top);
    }
    else
    {
       // num = s.stk[s.top];
        printf ("poped element is = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
}

void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("STACK is empty\n");

    }
    else
    {
        printf (" elements in stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
}
*/
