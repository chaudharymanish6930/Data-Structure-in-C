#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    typedef struct node n;
    n *head, *ptr1, *ptr2, *ptr3, *temp;
    int x;
    printf("enter the value of ptr1:");
    scanf("%d",&x);
    ptr1=malloc(sizeof(n));
    ptr1->data=x;
    
    int y;
    printf("enter the value of ptr2:");
    scanf("%d",&y);
    ptr2=malloc(sizeof(n));
    ptr2->data=y;

    ptr1->next=ptr2;
    
    int z;
    printf("enter the value of ptr3:");
    scanf("%d",&z);
    ptr3=malloc(sizeof(n));
    ptr3->data=z;
    ptr3->next=NULL;

    ptr2->next=ptr3;
    
    // important  work starts now at that time...
    head=ptr1;

    temp=head;
    while (temp){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");

    return 0;
}