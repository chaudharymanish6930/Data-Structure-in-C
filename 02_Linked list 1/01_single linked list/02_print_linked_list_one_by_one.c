#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    typedef struct node n1;
    n1 *ptr, *ptr2, *head, *temp;

    ptr = malloc(sizeof(n1));
    ptr->data=10;
    ptr->next=ptr2;
    printf("%d->",ptr->data);

    ptr2=malloc(sizeof(n1));
    ptr2->data=20;
    ptr2->next=NULL;
    printf("%d->",ptr2->data);
    printf("NULL");
   

    return 0;
}