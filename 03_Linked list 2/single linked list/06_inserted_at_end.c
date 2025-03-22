#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *head, *current;

void inserted_at_end(struct node *head,int data){
    if(head==NULL){
        printf("empty linked list");
          return;
    }
    struct node *ptr=head, *temp;
    temp=malloc(sizeof(struct node));
    // if(head==NULL){
    //     printf("memory allocaton failed");
    //     return ;
    // }
    temp->data=data;
    temp->link=NULL;

    ptr=head;
    while(ptr->link!=NULL){
        // printf("%d->",ptr->data);
        ptr=ptr->link;
    }
    ptr->link=temp;
    // printf("%d",temp->data);
}
void display(struct node *head){
    if(head==NULL){
        printf("empty linked list");
        return;
    }
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ->",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n");
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
    current->data=30;
    current->link=NULL;

    head->link->link=current;

    current=malloc(sizeof(struct node));
    current->data=40;
    current->link=NULL;

    head->link->link->link= current;
    
    inserted_at_end(head,90);
    display(head);

    return 0;
}
