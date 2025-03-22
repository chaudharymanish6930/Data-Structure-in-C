#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head, *temp; // pointer to the head node & next node by temp
    head=malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;
    
    temp=malloc(sizeof(struct node));
    temp->data=98;
    temp->next=NULL;

    head->next=temp;
    return 0;
}