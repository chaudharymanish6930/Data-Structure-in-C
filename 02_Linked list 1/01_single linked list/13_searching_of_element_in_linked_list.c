#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    typedef struct node n;
    n *head, *ptr1, *ptr2, *ptr3, *ptr4, *temp;

    ptr1=malloc(sizeof(n));
    ptr1->data=10;
    // ptr1->next=NULL;

    ptr2=malloc(sizeof(n));
    ptr2->data=20;
    // ptr2->next=NULL;

    ptr1->next=ptr2;
    
    ptr3=malloc(sizeof(n));
    ptr3->data=30;
    // ptr3->next=NULL;

    ptr2->next=ptr3;

    ptr4=malloc(sizeof(n));
    ptr4->data=40;
    ptr4->next=NULL;

    ptr3->next=ptr4;

  // important and main work
    
    head=ptr1;

    temp=head; //head se le kar aaaage jayega......
    while (temp)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

   // seaching of an element from the linked list
   int seachvalue,position=1, found=0;
   printf("enter the value to search :");
   scanf("%d",&seachvalue);

   temp=head;
   while(temp!=NULL){
    if(temp->data==seachvalue){
        printf("the value is %d found at position of %d",seachvalue,position);
        found=1;
        break;
    }
    temp=temp->next;
    position++;
   }
   if(!found){
    printf("the value iis not found in this linked list ");
   }
   
   return 0;
}