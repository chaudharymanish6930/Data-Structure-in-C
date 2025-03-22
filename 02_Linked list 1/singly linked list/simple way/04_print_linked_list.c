#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void print_data(struct node *head){
    if(head==NULL){
        printf("linked list is empty");
    }
    
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct node *head,*temp;
    head=malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;

    temp=malloc(sizeof(struct node));
    temp->data=98;
    temp->next=NULL;

    head->next=temp;

    temp=malloc(sizeof(struct node));
    temp->data=3;
    temp->next=NULL;

    head->next->next=temp;
    print_data(head);
    return 0;
}