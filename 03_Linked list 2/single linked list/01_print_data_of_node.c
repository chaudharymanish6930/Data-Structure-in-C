#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *head;

int main(){
    head=malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&head->data);
    // head->data=90;
    head->link=NULL;

    printf("%d",head->data);
    
    return 0;
}