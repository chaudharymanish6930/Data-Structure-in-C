#include<stdio.h>
#include<stdlib.h>
int main(){
struct node{
   int data;
   struct node *next;
};
typedef struct node n1;
n1 *head,*ptr ,*ptr2, *temp;

ptr = /*(n1*)*/malloc(sizeof(n1));
ptr->data=10;
ptr->next=ptr2;
// printf("%d->",ptr->data);

//  ptr2= /*(n1*)*/malloc(sizeof(n1));
ptr2->data=20;
ptr2->next=NULL;

// head main ptr fixed hain
head=ptr;


temp=head;
while(temp){
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL");
return 0;
}