#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    typedef struct node n1;
    n1 *head, *ptr, *ptr2, *ptr3, *temp;

    ptr =malloc(sizeof(n1));
    ptr->data=20;
    // ptr->next=NULL;

    ptr2 =malloc(sizeof(n1));
    ptr2->data=30;
    // ptr2->next=NULL;

    ptr->next=ptr2;
    
    ptr3=malloc(sizeof(n1));
    ptr3->data=20;
    ptr3->next=NULL;
      
    ptr2->next=ptr3;
    
    // head main value set kardi
    head=ptr;

    // temp main value isliye set kari hain jisse subko le sake       
    temp=head;
    while(temp/*!=NULL*/){
    printf("%d->",temp->data);
    temp=temp->next;
    }
    printf("NULL");

    // free(ptr);
    // free(ptr2);

    return 0;
}