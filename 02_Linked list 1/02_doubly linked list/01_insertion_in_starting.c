#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
        struct node *previous;
    };
    typedef struct node n;
    n *head, *ptr1, *ptr2, *ptr3, *ptr4, *temp,*newnode, *last;
     
     int x;
    printf("enter ptr1:");
    scanf("%d",&x);
    ptr1=malloc(sizeof(n));
    ptr1->data=x;
    ptr1->next=NULL;
    // ptr1->previous=NULL;

    int y;
    printf("enter ptr2:");
    scanf("%d",&y);
    ptr2=malloc(sizeof(n));
    ptr2->data=y;
    // ptr2->next=NULL;
    // ptr2->previous=NULL;

    // important part
    ptr1->next=ptr2;
    ptr2->previous=ptr1;

     int z;
    printf("enter ptr3:");
    scanf("%d",&z);
    ptr3=malloc(sizeof(n));
    ptr3->data=z;
    // ptr3->next=NULL;
    // ptr3->previous=NULL;

    // important part
    ptr2->next=ptr3;
    ptr3->previous=ptr2;

     int a;
    printf("enter ptr4:");
    scanf("%d",&a);
    ptr4=malloc(sizeof(n));
    ptr4->data=a;
    // ptr4->next=NULL;
    ptr4->next=NULL;

    // important part
    ptr3->next=ptr4;
    ptr4->previous=ptr3;
     
    // most important part
    head=ptr1;

    temp=head;
    while(temp){
        printf(" %d <->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

    // insertion of new element in linked list
    // at starting point
    // printf("enter the new element:");
    // scanf("%d",&newnode->data);
    newnode=malloc(sizeof(n));
    newnode->data=9;
    newnode->next=ptr1;
    ptr1->previous=newnode;
    newnode->previous=NULL;

    // important
    head=newnode;
    temp=head;
    while(temp!=NULL){
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");


    return 0;
}