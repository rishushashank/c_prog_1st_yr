/* NAME: RISHU KUMAR
   ROLL:19/IT/43
   UNIVERSITY ROLL NO.:00219043

   Question.1> Delete a node into a linked list.
        1. At first
        2. At last
        3. At any position in middle.
   ANS:-
   */

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *ptr;
};
struct node *start=NULL;

 struct node* mynode()
 {
     struct node *n;
     n=(struct node *)malloc(sizeof(struct node));
     return(n);

 };

void insrtatfirst()
{
    int a,i;
     struct node *t,*t2;
     printf("Enter thE no. of node:");
     scanf("%d",&a);
     for(i=0;i<a;i++)
     {
     t=(struct node*)malloc(sizeof(struct node));
     t->ptr=NULL;
     printf("Enter the value:");
     scanf("%d",&t->data);
     if(start==NULL)
        start=t;
     else
     {
       t2=start;
       start=t;
       start->ptr=t2;

     }
     }
}

void dltfirst()
{
   struct node *x;
   if(start==NULL)
   {
       printf("noting is here to dlt");
   }
   else
   {
   x=start;
   start=start->ptr;
   free(x);
   }


}

void dltlast()
{
    struct node *y,*a;
     if(start==NULL)
   {
       printf("noting is here to dlt");
   }
   else
   {
        y=start;
        while(y->ptr!=NULL)
          {
            a=y;
            y=y->ptr;
          }
        a->ptr=NULL;
        free(y);

   }

}

void dltrandom()
{
    struct node *a,*l,*q;
    int n,i;
    printf("which position of node or value you want to dlt");
    scanf("%d",&n);
     if(start==NULL)
   {
       printf("noting is here to dlt");
   }
   if(n==1)
   {
      dltfirst();
   }
    a=start;
    for(i=1;i<n;i++)
    {
        l=a;
        a=a->ptr;
    }
    q=a->ptr;
    l->ptr=q;
    free(a);

}

 void display()
 {
     struct node *x;
     if(start==NULL)
     {
         printf("\nNode is empty\n");
     }
     else
     {
          x=start;
         while(x!=NULL)
         {
             printf("%d\t",x->data);
             x=x->ptr;
         }
     }
 }
 int menu()
 {
    int c;
        printf("\n1>.INSERT");
        printf("\n2>.DELETE FIRST");
        printf("\n3>.DELETE LAST");
        printf("\n4>.DELETE RANDO");
        printf("\n5>.DISPLAY");
        printf("\n6>.EXIT");
        printf("\nEnter the choice:");
        scanf("%d",&c);
        return(c);

    }

 int main()
 {
     while(1){
      switch(menu())
        {
        case 1:
            insrt();
            break;
        case 2:
            dltfirst();
            break;
        case 3:
            dltlast();
            break;
        case 4:
             dltrandom();
             break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("enter the valid choice");
        }
     }
     return(0);
     getch();
 }








/*
/*
void insrtrandom()
{
    struct node *t,*temp;
    int n,i;
    t=mynode();
    printf("Enter the value:");
    scanf("%d",&t->data);
    if(start==NULL)
     {
         start=t;
         t->ptr=NULL;
     }
     else
    {
    printf("After which position you want to insrt :");
    scanf("%d",&n);
    temp=start;
    for(i=0;i<n-1;i++)
     {
         temp=temp->ptr;
         if(temp==NULL){
            printf("Position is larger then the no. of node.\n");
            break;
         }
     }
    t->ptr=temp->ptr;
    temp->ptr=t;
     }

}
*/
 void insrtlast()
 {
     struct node *temp,*t;
     temp=mynode();
     printf("Enter the value:");
     scanf("%d",&temp->data);

     temp->ptr=NULL;

     if(start==NULL)
     {
         start=temp;
     }
     else
     {
         t=start;
         while(t->ptr!=NULL)
         {
             t=t->ptr;
         }
        t->ptr=temp;
     }

 }
*/


/*
struct node
{
    int value;
    struct node *ptr;
};
struct node *start=NULL;

void insrtValue()
{
     struct node *t,*temp;
     t=(struct node*)malloc(sizeof(struct node));
     printf("enter the value");
     scanf("%d",&t->value);

     t->ptr=NULL;
     if(start==NULL)
        start=t;
     else
     {
       temp=start;
         while(temp->ptr!=NULL)
         {
             temp=temp->ptr;
         }
        temp->ptr=t;
     }
}


void display()
{
    struct node *x;

    if(start==NULL)
        printf("node is empty");

    else
        x=start;
        {
    while(x!=NULL)
    {
        printf("%d\t",x->value);
        x=x->ptr;
    }
     }
}


int main()
{
    int c;
    while(1)
    {
        printf("\n1>.insrt\n");
         printf("2>.display\n");
         printf("3>. exit\n");

          printf("enter what you want:");
         scanf("%d",&c);
         switch(c)
         {
          case 1:
             insrtValue();
             break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            printf("Please enter the valid choice");
         }

    }
    return 0;
    getch();

}
/*
struct node
{
    int data;
    struct node *ptr;
};
struct node *start=NULL;

 struct node* mynode()
 {
     struct node *n;
     n=(struct node *)malloc(sizeof(struct node));
     return(n);

 };
 void insrtrandom()
{
    struct node *t,*temp;
    int n,i;
    t=mynode();
    printf("enter the value");
    scanf("%d",&t->data);
    if(start==NULL)
     {
         start=t;
         t->ptr=NULL;
     }
     else
    {
    printf("after which position you want to insrt :");
    scanf("%d",&n);
    temp=start;
    for(i=0;i<n-1;i++)
     {
         temp=temp->ptr;
         if(temp==NULL){
            printf("position is larger then the no. of node");
            break;
         }
     }
    t->ptr=temp->ptr;
    temp->ptr=t;
     }

}

void insrtfirst()
{
     struct node *t,*t2;
     t=(struct node*)malloc(sizeof(struct node));
     printf("enter the value");
     scanf("%d",&t->data);

     t->ptr=NULL;
     if(start==NULL)
        start=t;
     else
     {
       t2=start;
       start=t;
       start->ptr=t2;

     }
}

 void insrtlast()
 {
     struct node *temp,*t;
     temp=mynode();
     printf("enter the value:");
     scanf("%d",&temp->data);

     temp->ptr=NULL;

     if(start==NULL)
     {
         start=temp;
     }
     else
     {
         t=start;
         while(t->ptr!=NULL)
         {
             t=t->ptr;
         }
        t->ptr=temp;
     }

 }

 void display()
 {
     struct node *x;
     if(start==NULL)
     {
         printf("\nnode is empty\n");
     }
     else
     {
          x=start;
         while(x!=NULL)
         {
             printf("%d\t",x->data);
             x=x->ptr;
         }
     }
 }
 void invdisplay()
{
    struct node *x=NULL;
     struct node *a;

            while(start->ptr!=NULL)
            {
                a=start->ptr;
                start->ptr=x;
                x=start;
                start=a;
            }
            start->ptr=x;
}

void dltfirst()
{
   struct node *x;
   if(start==NULL)
   {
       printf("noting is here to dlt");
   }
   else
   {
   x=start;
   start=start->ptr;
   free(x);
   }


}

void dltlast()
{
    struct node *y,*a;
     if(start==NULL)
   {
       printf("noting is here to dlt");
   }
   else
   {
        y=start;
        while(y->ptr!=NULL)
          {
            a=y;
            y=y->ptr;
          }
        a->ptr=NULL;
        free(y);

   }

}

void dltrandom()
{
    struct node *a,*l,*q;
    int n,i;
    printf("which position of node or value you want to dlt");
    scanf("%d",&n);
     if(start==NULL)
   {
       printf("noting is here to dlt");
   }
   if(n==1)
   {
      dltfirst();
   }
    a=start;
    for(i=1;i<n;i++)
    {
        l=a;
        a=a->ptr;
    }
    q=a->ptr;
    l->ptr=q;
    free(a);

}

void search()
{
    struct node *a;
    int n,i=1;
    printf("enter the value you want to search");
    scanf("%d",&n);
     if(start==NULL)
   {
       printf("node is empty");
   }
    a=start;
    while(a!=NULL)
    {
        if(n==a->data)
        {
            printf("yes your value are present here in the poistion:");
            printf("%d,",i);

        }
         a=a->ptr;
         i++;
    }

        printf("sry,your value is not prsnt here");
}

 int menu()
 {
    int c;
        printf("\n1>.insertfirst");
        printf("\n2>.display");
        printf("\n3>.inverse");
        printf("\n4>.insrtrandom");
        printf("\n5>.insrtlast");
        printf("\n6>.dltfirst");
        printf("\n7>.dltlast");
        printf("\n8>.dltrandom");
        printf("\n9>.search");
        printf("\nenter the choice:");
        scanf("%d",&c);
        return(c);

    }

 int main()
 {
     while(1){
      switch(menu())
        {
        case 1:
            insrtfirst();
            break;
        case 2:
            display();
            break;
        case 3:
            invdisplay();
            break;
        case 4:
           insrtrandom();
            break;
        case 5:
            insrtlast();
            break;
        case 6:
            dltfirst();
            break;
        case 7:
            dltlast();
            break;
        case 8:
            dltrandom();
            break;
        case 9:
             search();
             break;
        default:
            printf("enter the valid choice");
        }
     }
     return(0);
     getch();
 }
*/
/*
struct node
{
    int value;
    struct node *ptr;
};
struct node *start=NULL;

void insrtValue()
{
     struct node *t,*temp;
     t=(struct node*)malloc(sizeof(struct node));
     printf("enter the value");
     scanf("%d",&t->value);

     t->ptr=NULL;
     if(start==NULL)
        start=t;
     else
     {
       temp=start;
         while(temp->ptr!=NULL)
         {
             temp=temp->ptr;
         }
        temp->ptr=t;
     }
}


void display()
{
    struct node *x;

    if(start==NULL)
        printf("node is empty");

    else
        x=start;
        {
    while(x!=NULL)
    {
        printf("%d\t",x->value);
        x=x->ptr;
    }
     }
}


int main()
{
    int c;
    while(1)
    {
        printf("\n1>.insrt\n");
         printf("2>.display\n");
         printf("3>. exit\n");

          printf("enter what you want:");
         scanf("%d",&c);
         switch(c)
         {
          case 1:
             insrtValue();
             break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            printf("Please enter the valid choice");
         }

    }
    return 0;
    getch();

}*/


// only in first postion enter.
/*

struct node
{
    int value;
    struct node *ptr;
};
struct node *start=NULL;

void insrtValue()
{
     struct node *t,*t2;
     t=(struct node*)malloc(sizeof(struct node));
     printf("enter the value");
     scanf("%d",&t->value);

     t->ptr=NULL;
     if(start==NULL)
        start=t;
     else
     {
       t2=start;
       start=t;
       start->ptr=t2;

     }
}

void display()
{
    struct node *x;

    if(start==NULL)
        printf("node is empty");

    else
        x=start;
        {
    while(x!=NULL)
    {
        printf("%d\t",x->value);
        x=x->ptr;
    }
     }
}



int main()
{
    int c;
    while(1)
    {
        printf("\n1>.insrt\n");
         printf("2>.display\n");
         printf("3>. exit\n");

          printf("enter what you want:");
         scanf("%d",&c);
         switch(c)
         {
          case 1:
             insrtValue();
             break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        case 4:
            invdisplay();
        default:
            printf("Please enter the valid choice");
         }

    }
    return 0;
    getch();

}

*/

/*

struct node
{
    int value;
    struct node *ptr;
};
struct node *start=NULL;
struct node* mynode()
 {
     struct node *n;
     n=(struct node *)malloc(sizeof(struct node));
     return(n);

 };
 void dlt()
 {
     struct node *x,*y;
     x=start;
     y=x->ptr;
     start=y;
     free(x);
 }



void insrtrandom()
{
    struct node *t,*temp;
    int n,i;
    t=mynode();
    printf("enter the value");
    scanf("%d",&t->value);
    printf("after which position you want to insrt :");
    scanf("%d",&n);
    temp=start;
     for(i=0;i<n-1;i++)
     {
         temp=temp->ptr;
         if(temp->ptr==NULL)
            printf("position is larger then the no. of node");
     }
            t->ptr=temp->ptr;
            temp->ptr=t;

     }



void insrt()
 {
     struct node *temp,*t;
     temp=mynode();
     printf("enter the value:");
     scanf("%d",&temp->value);

     temp->ptr=NULL;

     if(start==NULL)
     {
         start=temp;
     }
     else
     {
         t=start;
         while(t->ptr!=NULL)
         {
             t=t->ptr;
         }
        t->ptr=temp;
     }

 }


void display()
{
    struct node *x;

    if(start==NULL)
        printf("node is empty");

    else
        x=start;
        {
    while(x!=NULL)
    {
        printf("%d\t",x->value);
        x=x->ptr;
    }
     }
}


int main()
{
    int c;
    while(1)
    {
        printf("\n\n1>.insrt\n");
         printf("2>.display\n");
         printf("3>. exit\n");
         printf("4>. random positon\n");
         printf("5>. delete\n");

          printf("enter what you want:");
         scanf("%d",&c);
         switch(c)
         {
          case 1:
             insrt();
             break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        case 4:
            insrtrandom();
            break;
        case 5:
            dlt();
            break;
        default:
            printf("Please enter the valid choice");
         }

    }
    return 0;
    getch();

}
*/
