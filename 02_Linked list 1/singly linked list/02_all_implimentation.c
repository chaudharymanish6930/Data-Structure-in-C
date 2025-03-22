// Singly Linked List Implementation using Arrays
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int data;
    int next;
} Node;

Node singlyList[MAX];
int head = -1;
int freeNode = 0;

void initializeList() {
    for (int i = 0; i < MAX - 1; i++) {
        singlyList[i].next = i + 1;
    }
    singlyList[MAX - 1].next = -1;
}

int getFreeNode() {
    if (freeNode == -1) {
        printf("No free nodes available\n");
        return -1;
    }
    int index = freeNode;
    freeNode = singlyList[freeNode].next;
    return index;
}

void insertAtBeginning(int value) {
    int newNode = getFreeNode();
    if (newNode == -1) return;
    singlyList[newNode].data = value;
    singlyList[newNode].next = head;
    head = newNode;
}

void deleteAtBeginning() {
    if (head == -1) {
        printf("List is empty\n");
        return;
    }
    int temp = head;
    head = singlyList[head].next;
    singlyList[temp].next = freeNode;
    freeNode = temp;
}

void displayList() {
    int current = head;
    while (current != -1) {
        printf("%d -> ", singlyList[current].data);
        current = singlyList[current].next;
    }
    printf("NULL\n");
}

// Pointer-based Singly Linked List
typedef struct NodePtr {
    int data;
    struct NodePtr *next;
} NodePtr;

NodePtr *headPtr = NULL;

void insertAtBeginningPtr(int value) {
    NodePtr *newNode = (NodePtr *)malloc(sizeof(NodePtr));
    newNode->data = value;
    newNode->next = headPtr;
    headPtr = newNode;
}

void deleteAtBeginningPtr() {
    if (headPtr == NULL) {
        printf("List is empty\n");
        return;
    }
    NodePtr *temp = headPtr;
    headPtr = headPtr->next;
    free(temp);
}

void displayListPtr() {
    NodePtr *current = headPtr;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Doubly Linked List
typedef struct DoublyNode {
    int data;
    struct DoublyNode *prev;
    struct DoublyNode *next;
} DoublyNode;

DoublyNode *dHead = NULL;

void insertAtBeginningDoubly(int value) {
    DoublyNode *newNode = (DoublyNode *)malloc(sizeof(DoublyNode));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = dHead;
    if (dHead != NULL) dHead->prev = newNode;
    dHead = newNode;
}

void deleteAtBeginningDoubly() {
    if (dHead == NULL) {
        printf("List is empty\n");
        return;
    }
    DoublyNode *temp = dHead;
    dHead = dHead->next;
    if (dHead != NULL) dHead->prev = NULL;
    free(temp);
}

void displayDoublyList() {
    DoublyNode *current = dHead;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Circular Linked List
typedef struct CircularNode {
    int data;
    struct CircularNode *next;
} CircularNode;

CircularNode *cHead = NULL;

void insertAtEndCircular(int value) {
    CircularNode *newNode = (CircularNode *)malloc(sizeof(CircularNode));
    newNode->data = value;
    if (cHead == NULL) {
        cHead = newNode;
        newNode->next = cHead;
        return;
    }
    CircularNode *temp = cHead;
    while (temp->next != cHead) temp = temp->next;
    temp->next = newNode;
    newNode->next = cHead;
}

void deleteAtBeginningCircular() {
    if (cHead == NULL) {
        printf("List is empty\n");
        return;
    }
    if (cHead->next == cHead) {
        free(cHead);
        cHead = NULL;
        return;
    }
    CircularNode *temp = cHead;
    CircularNode *last = cHead;
    while (last->next != cHead) last = last->next;
    last->next = cHead->next;
    cHead = cHead->next;
    free(temp);
}

void displayCircularList() {
    if (cHead == NULL) {
        printf("List is empty\n");
        return;
    }
    CircularNode *current = cHead;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != cHead);
    printf("(head)\n");
}

// Polynomial Representation and Operations
// Represent polynomial as a linked list
// (The implementation for polynomial addition, subtraction, and multiplication will follow a similar format and can be detailed as needed).
