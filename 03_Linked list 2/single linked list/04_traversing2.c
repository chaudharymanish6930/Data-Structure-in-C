#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link; 
};
struct node *head, *current1, *current2, *current3;

void traverse(struct node *head){
    if(head==NULL){
        printf("empty linnked list");
    }
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}

int main(){
    head=malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;

    current1=malloc(sizeof(struct node));
    current1->data=20;
    current1->link=NULL;

    head->link=current1;

    current2=malloc(sizeof(struct node));;
    current2->data=30;
    current2->link=NULL;

    current1->link=current2;
    
    current3=malloc(sizeof(struct node));
    current3->data=40;
    current3->link=NULL;

    current2->link=current3;
    traverse(head);
    return 0;
}