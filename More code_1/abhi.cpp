/*#include<stdio.h>
#include<conio.h>
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
int main(){
    int choice;
    printf("1.Insert At Beg\n");
    printf("2.Insert at position p\n");
    printf("3.Insert at end of list\n");
    printf("4.Delete from Beg\n");
    printf("5.Delete at position p\n");
    printf("6.Delete from end of the list\n");
    printf("7.Display the List\n");
    printf("8.Delete the List\n");
    printf("9.Sort the list\n");
    printf("10.Exit\n");
    while(1){
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
        case 1:{
            insert_beg();
            break;
        }
        case 2:{
            inser_at_pos();
            break;
        }
        case 3:{
            insert_end();
            break;
        }
        case 4:{
            delete_beg();
            break;
        }
        case 5:{
            delete_from();
            break;
        }
        case 6:{
            delete_end();
            break;
        }
        case 7:{
            display_list();
            break;
            }
        case 8:{
            delete_list();
            break;
        }
        case 9:{break;}
        case 10:{
            exit(1);
            break;
            }
        }
    }
    return 0;
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
void inser_at_pos(){
    int pos,i=1;
    struct node *temp,*t,*r;
    t = START;
    temp = create_node();
    temp->next = NULL;
    printf("Enter the position on which data to be entered\n");
    scanf("%d",&pos);
    printf("Enter the data to be inserted\n");
    scanf("%d",&temp->data);
    if(pos == 1){
        temp->next = t;
        START = temp;
    }
    else{
        while((t!=NULL) && (i<pos) ){
            i++;
            r = t;
            t = t->next;
        }
        r->next = temp;
        temp->next = t;
    }
}
void delete_beg(){
    struct node *ptr;
    ptr = START;
    if(START == NULL)
        printf("UNDERFLOW");
    else{
    START = START->next;
    free(ptr);
    }
}
void delete_from(){
    int i=1, pos;
    struct node *temp,*prev;
    temp = prev = START;
    printf("Enter the position from where you want to delete the element:");
    scanf("%d",&pos);
    if(START == NULL)
        printf("UNDERFLOW");
    else{
        while(i<pos && temp != NULL){
            i++;
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
    }
}
void delete_end(){
    struct node *ptr,*temp;
    ptr = START;
    temp = START;
    if(START == NULL)
        printf("UNDERFLOW");
    else{
        while(ptr->next!=NULL){
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        free(ptr);
    }
}
void delete_list(){
    struct node *prev,*temp;
    temp = prev = START;
    if(START == NULL){
        printf("LIST IS ALREADY EMPTY");
    }
    else{
        while(temp!= 0){
            prev = temp;
            temp = temp->next;
            free(prev);
        }
    }
    printf("LIST IS DELETED");
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
}*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	int me=0,you=0;
	cin>>t;
	while(t != 0){
	    me =0;
	    you =0;
	    t--;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    if(n == 1){
	        cout<<arr[0]<<"\n";
	        break;
	    }

	    int s =k+1;
	    for(int i=n-1;i>=0;i=i-2){
	        if(k == 0)
	        break;
	        me = me +arr[i];
	        k--;
	    }
	    for(int i=n-2;i>=0;i=i-2){
	        if(s == 0)
	        break;

	        you = you + arr[i];
	        s--;
	        if(i == 1){
	            you = you + arr[i-1];
	        }
	    }
	    cout<<max(me,you)<<"\n";
	}
	return 0;
}
