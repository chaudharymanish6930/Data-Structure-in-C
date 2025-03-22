#include<stdio.h>
struct node{
    int data;
    struct node *next;  
};
typedef struct node node;

node *insertion1(node*head){
    node *ptr;
    for(int i=1;i<=10;i++){
        node *temp=(node*)malloc(sizeof(node));
        temp->data=i*10;
        temp->next=NULL;
    if(head==NULL){
        head=temp;
        head->next=NULL;
        ptr=head;
    }
    else{
        ptr->next=temp;
        ptr=temp;
        ptr->next=NULL;
    }
    }
    return head;
}
node *flist(node*head){
    node *ptr;
    
    for(int i=1;i<=20;i++){
        node *temp=(node*)malloc(sizeof(node));
        temp->data=i*0;
        temp->next=NULL;
    if(head==NULL){
        head=temp;
        head->next=NULL;
        ptr=head;
    }
    else{
        ptr->next=temp;
        ptr=temp;
        ptr->next=NULL;
    }
    }
    return head;
}
node *insertion2(node*head){
    node*ptr;
    
    for(int i=0;i<=20;i){
        
    }
}
int main(){
  
}