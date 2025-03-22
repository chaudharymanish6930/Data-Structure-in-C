#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// Node structure representing a single node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

// Structure to implement queue operations using a linked list
typedef struct Queue {
    Node *front, *rear;
} Queue;

// Function to create a queue
Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

// Function to check if the queue is empty
int isEmpty(Queue* q) {
    return (q->front == NULL && q->rear == NULL);
}

// Function to add an element to the queue
void enqueue(Queue* q, int new_data) {
    Node* new_node = createNode(new_data);
    if (q->rear == NULL) {
        q->front = q->rear = new_node;
        return;
    }
    q->rear->next = new_node;
    q->rear = new_node;
    printf("%d enqueued to queue\n", new_data);
}

// Function to remove an element from the queue
void dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return;
    }
    Node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    printf("%d dequeued from queue\n", temp->data);
    free(temp);
}

// Function to get the front element of the queue
int getFront(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return INT_MIN;
    }
    return q->front->data;
}

// Function to get the rear element of the queue
int getRear(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return INT_MIN;
    }
    return q->rear->data;
}

// Function to display the queue
void displayQueue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    Node* temp = q->front;
    printf("Queue elements are: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Driver code
int main() {
    Queue* q = createQueue();
    int choice, data;

    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Get Front\n4. Get Rear\n5. Display Queue\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &data);
                enqueue(q, data);
                break;
            case 2:
                dequeue(q);
                break;
            case 3:
                data = getFront(q);
                if (data != INT_MIN) {
                    printf("Front element is %d\n", data);
                }
                break;
            case 4:
                data = getRear(q);
                if (data != INT_MIN) {
                    printf("Rear element is %d\n", data);
                }
                break;
            case 5:
                displayQueue(q);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 6);

    return 0;
}