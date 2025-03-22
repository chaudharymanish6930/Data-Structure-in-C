#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *head=NULL,*current;

void count_of_nodes (struct node *head){
    int count=0;
    if(head==NULL){
        printf("linked list is empty");
    }

    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count ++;
        ptr=ptr->link;
    }
    printf("%d",count);
}
int main(){
    head = malloc(sizeof(struct node));
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
    current->data=30;
    current->link=NULL;

    head->link->link->link=current;

    current=malloc(sizeof(struct node));
    current->data=90;
    current->link=NULL;

    head->link->link->link->link=current;

    count_of_nodes(head);

    return 0;
}
