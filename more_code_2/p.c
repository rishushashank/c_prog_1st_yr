#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node *next;
};
 struct node *start=NULL;
 int i=0;
 struct node* creatnode()
 {
     struct node *s;
     s=(struct node*)malloc(sizeof(struct node));
     return(s);

 };
 void insertion()
  {
      struct node *ptr,*T;
      ptr=creatnode();
      printf("insert the value");
      scanf("%d",&ptr->value);
      ptr->next=NULL;
      if(start==NULL)
      {
          start=ptr;
          i++;
      }
      else
      {
          T=start;
          while(T->next!=NULL)
            T=T->next;
          T->next=ptr;
          i++;
      }
  }
  void atposition()
  {
      int n,t;
      struct node *ptr,*x,*temp,*z;
      ptr=creatnode();
      printf("at which position you want to add value");
      scanf("%d",&n);
      printf("enter the value");
      scanf("%d",&ptr->value);
      x=start;
      if(n == 1)
    {
        ptr->next = x;
        start = ptr;
        i++;
    }
    else
    {
      if(n<=i+1)
      {
      for(t=0;t<n-1;t++)
      {
          z=x;
          x=x->next;
      }
       if(x==NULL)
       {
           printf("LAST NODE");
           z->next=ptr;
           ptr->next=NULL;
           i++;
       }
       else
       {
           temp=x;
           z->next=ptr;
           ptr->next=temp;
           i++;
       }
      }
      else
        printf("out of node");


  }
  }
  void display()
  {
      struct node *x;
      x=start;
      if(x==NULL)
        printf("THE NODE IS EMPTY\n");
      else
      {
           while(x!=NULL)
           {
               printf("%d",x->value);
               x=x->next;
           }
      }
  }
  void main()
  {
       int n;
      while(1)
      {
      printf("1>insertion\n");
      printf("2>position\n");
      printf("3>display\n");
      printf("4>exit\n");
      printf("enter the key=");
      scanf("%d",&n);
      switch(n)
            {
        case 1:
             insertion();
             break;
        case 2:
            atposition();
            break;
        case 3:
            display();
            break;
        case 4:
          exit(0);
        default:
            printf("Please enter the valid choice");
    }
        }
        getch();
  }
