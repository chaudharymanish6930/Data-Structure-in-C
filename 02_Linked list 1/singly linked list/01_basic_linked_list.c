// #include <stdio.h>
// #include <stdlib.h>

// struct stu *new(int);
// void addnode_fifo();
// void traverse();

// struct stu{
//     int data;
//     struct stu* next;
// }*p, *temp, *head; 
// // typedef struct stu stu;  stu *p, *temp, *head;

// struct stu *new(int a){
//     p=(struct stu*)malloc(sizeof(struct stu));
//     p->data=a;
//     p->next=NULL;
//     return p;
// }

// void addnode_fifo(){
//     temp=head;
//     if(head=NULL){
//         head=p;
//     }
//     else{
//         while(temp->next!=NULL){
//             temp=temp->next;
//             temp->next=p;
//         }
//     }
// }

// void traverse(){
//     temp=head;
//     while(temp!=NULL){
//         printf("\n%d",temp->data);
//         temp=temp->next;
//     }
// }

// int main()
// {
//     int a,ch=1;
//     //  struct stu*
//     // int *p;
//     while (ch!=0){
//         printf("/nenter a number:");
//         scanf("%d",&a);
//         p=new(a);
//         addnode_fifo(p);
//         printf("\npress 1 for continue and 0 for end:");
//         scanf("%d",&ch);
//     }

//     printf("\nthe list is as follows");
//     traverse(head);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node to the end of the linked list
struct Node* addNode(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        return head;
    }
}

// Function to traverse and print the linked list
void traverse(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    int data, choice = 1;

    while (choice != 0) {
        printf("\nEnter a number: ");
        scanf("%d", &data);
        // here  "head" is storred the address of theaddnode return aayega uska
        head = addNode(head, data);
        printf("Press 1 to continue or 0 to end: ");
        scanf("%d", &choice);
    }

    printf("\nThe linked list is as follows:\n");
    traverse(head);

    return 0;
}
