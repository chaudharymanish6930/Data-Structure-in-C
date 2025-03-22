#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
struct node *head,*current;

struct node *beginning(struct node *head){
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=30;
    ptr->link=NULL;

    ptr->link=head;
    head=ptr;
    return head;
}

int main(){
    head=malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;

    current=malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;

    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;

    head->link->link=current;

    head=beginning(head);
    
    current=head;
    while(current!=NULL){
        printf("%d->",current->data);
        current=current->link;
    }
    printf("NULL\n");
    return 0;
}