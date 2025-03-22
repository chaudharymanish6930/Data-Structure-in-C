#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
        struct node *previous;
    };
    typedef struct node n;
    n *head, *temp, *ptr1, *ptr2, *ptr3;
    
    ptr1=malloc(sizeof(n));
    ptr1->data=10;
    // ptr1->next=NULL;
    // ptr1->previous=NULL;
    
    ptr2=malloc(sizeof(n));
    ptr2->data=20;
    
    ptr1->next=ptr2;
    ptr2->previous=ptr1;

    ptr3=malloc(sizeof(n));
    ptr3->data=30;
    ptr3->next=NULL;

    ptr2->next=ptr3;
    ptr3->previous=ptr2;

    head=ptr1;
    temp=head;
    while(temp){
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");

    return 0;
}