#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
        struct node* previous;
    };
    typedef struct node n;
    n *head, *ptr1, *ptr2, *ptr3, *ptr4, *temp;

    ptr1=malloc(sizeof(n));
    ptr1->data=1;
    ptr1->next=NULL;
 

    ptr2=malloc(sizeof(n));
    ptr2->data=2;

    //
    ptr1->next=ptr2;

    ptr3=malloc(sizeof(n));
    ptr3->data=3;

    //
    ptr2->next=ptr3;
    // ptr3->previous=ptr2;

    ptr4=malloc(sizeof(n));
    ptr4->data=4;

    ptr3->next=ptr4;
    ptr4->next=ptr1;
    // ptr4->previous=ptr3;
    // ptr4->next=ptr1;
    // ptr1->previous=ptr4;
    
    // head=ptr1;
    // temp=head;
    // while (temp!=NULL){
    // printf("%d->",temp->data);
    // temp=temp->next;
    // }

    head=ptr1;
    temp=head;
    do{
        printf("%d ->",temp->data);
        temp=temp->next;
    } while(temp!=head);{
        printf("  (back to head)");
    }
    return 0;
    
}