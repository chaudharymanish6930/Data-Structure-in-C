#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    // Initialize nodes
    struct Node *head, *second, *third;

    // Create nodes
    head = createNode(10);
    second = createNode(20);
    third = createNode(30);

    // Link nodes
    head->next = second;
    second->next = third;

    // Print the linked list
    printList(head);

    // Free memory
    free(head);
    free(second);
    free(third);

    return 0;
}
