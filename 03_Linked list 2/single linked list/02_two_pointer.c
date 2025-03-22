#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;   
};
struct node *head,*current;

int main(){
    head = malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    printf("%d\n",head->data);
    
    current=malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;

    head->link=current;

    printf("%d\n",current->data);
    printf("%d\n",current->link);

    current=malloc(sizeof(struct node));
    current->data=30;
    current->link;

    printf("%d\n",current->data);
    printf("%d",current->link);
    
    // last node is separate not connected to each other
    head->link->link=current;

    return 0;
}

