#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void add_at_end(struct node *ptr,int data){
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    
    ptr->next=temp;
    ptr->data=temp;
    return temp;
}

int main(){
    struct node *head;
    head=malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;

    struct node *ptr=head;
    ptr=add_at_end(ptr,98);


    ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }

    return 0;
}