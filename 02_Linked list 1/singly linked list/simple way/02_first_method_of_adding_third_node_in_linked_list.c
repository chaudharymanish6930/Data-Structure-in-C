#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head,*temp, *temp2;
    head=malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;

    temp=malloc(sizeof(struct node));
    temp->data=98;
    temp->next=NULL;

    head->next=temp;

    temp2=malloc(sizeof(struct node));
    temp2->data=3;
    temp2->next=NULL;

    temp->next=temp2;


    
    printf("The linked list is as follows:\n");
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

    return 0;
}