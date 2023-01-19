/* NAME: RISHU KUMAR
   ROLL:19/IT/43
   UNIVERSITY ROLL NO.:00219043

   Question.1> INSERT a node into a linked list.
        1. At first
        2. At last
   ANS:-
   */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *START = NULL;
struct node* create_node(){
struct node *n;
n=(struct node*)malloc(sizeof(struct node));
return n;
}

void insert_beg(){
    struct node *temp,*t;
    temp = create_node();
    printf("Enter the number to be inserted:");
    scanf("%d",&temp->data);
    temp->next = NULL;
    t = START;
    if(START == NULL)
        START = temp;
    else{
        START = temp;
        temp->next = t;
    }
}
void insert_end(){
    struct node *t,*temp;
    temp = create_node();
    printf("Enter the data to be inserted:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    t = START;
    if(START==NULL){
        START = temp;
    }
    else{
        while(t->next != NULL)
            t = t->next;
        t->next = temp;
    }
}


void display_list(){
    struct node *t=START;
    if(t == NULL)
        printf("List is empty\n");
    else{
        while(t != NULL){
            printf("\t %d",t->data);
            t = t->next;
        }
        printf("\n");
    }
}
int main(){
    int choice;
    printf("1.Insert At Beg\n");
    printf("2.Insert at end of list\n");
    printf("3.Display the List\n");
    printf("4.Exit\n");
    while(1){
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
        case 1:{
            insert_beg();
            break;
        }

        case 2:{
            insert_end();
            break;
        }
         case 3:{
            display_list();
            break;
        }

         case 4:{
            exit(0);
            break;
        }

        }
    }
    return 0;
}
