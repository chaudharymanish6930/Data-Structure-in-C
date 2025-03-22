#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void count_of_nodes(struct node *head){
    int count =0;
    if(head=NULL){
        printf("list is empty");
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    printf("%d",count);
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

    // head->next->next=temp;
    count_of_nodes(head);
    
    return  0;
}
