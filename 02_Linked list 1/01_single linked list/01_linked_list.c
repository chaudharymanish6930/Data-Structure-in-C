#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
       // Create and initialize a node in a linked list
    struct Node* node;
    node= /*(struct Node*)*/malloc(sizeof(node));
    node->data = 10;
    node->next = NULL;

    printf("Node data: %d\n", node->data);
    // Free the allocated memory
    free(node);
    return 0;
}