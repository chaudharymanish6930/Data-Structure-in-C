#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
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
    return 0;
}