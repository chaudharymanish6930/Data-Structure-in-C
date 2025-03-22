#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to delete the first node
struct Node* deleteFirst(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
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
    struct Node* head = NULL;

    // Create nodes
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    first->data = 10; first->next = second;
    second->data = 20; second->next = NULL;
    head = first;

    printf("Before deletion: ");
    printList(head);

    head = deleteFirst(head);

    printf("After deletion: ");
    printList(head);

    // Free memory
    free(head);

    return 0;
}
