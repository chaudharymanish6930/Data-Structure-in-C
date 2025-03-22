#include <stdio.h>
#include <stdlib.h>
int main(){
     struct node{
        int data;
        struct node *next;
    };
    typedef struct node n;
    n *head, *ptr1, *ptr2, *ptr3, *temp, *new1;
  
    ptr1=malloc(sizeof(n));
    ptr1->data=98;
    
    
    ptr2=malloc(sizeof(n));
    ptr2->data=90;

    ptr1->next=ptr2;
    
   
    ptr3=malloc(sizeof(n));
    ptr3->data=45;
    ptr3->next=NULL;

    ptr2->next=ptr3;
    
    // important  work starts now at that time...
    head=ptr1;

    temp=head;
    while (temp){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    
    int x;
    if(ptr1==NULL){
        printf("list is not found");
    }
    else{
        ptr1->next=NULL;
    }
    head=ptr2;
    temp=head;
    while (temp){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    
    return 0;
}