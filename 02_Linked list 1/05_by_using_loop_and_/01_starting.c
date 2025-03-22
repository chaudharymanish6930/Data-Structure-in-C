#include<stdio.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    typedef struct node n;
    n *ptr1, *ptr2;
    for(int i=0;i<5;i++){
        ptr1->data=10;
        printf("%d ",ptr1->data);
        ptr1->next=ptr2;
    }
    for(int i=0;i<5;i++){
        ptr2->data=49;
        printf("%d",ptr2->data);
        ptr2->next=NULL;
    }


    return 0;
}