#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data) {
    if ((front == 0 && rear == MAX - 1) || (rear == (front - 1) % (MAX - 1))) {
        printf("Queue overflow\n");
        return;
    } else if (front == -1) { // Insert first element
        front = rear = 0;
        queue[rear] = data;
    } else if (rear == MAX - 1 && front != 0) {
        rear = 0;
        queue[rear] = data;
    } else {
        rear++;
        queue[rear] = data;
    }
    printf("%d enqueued to queue\n", data);
}

void dequeue() {
    if (front == -1) {
        printf("Queue underflow\n");
        return;
    }

    int data = queue[front];
    queue[front] = -1;
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
    printf("%d dequeued from queue\n", data);
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are: ");
    if (rear >= front) {
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    } else {
        for (int i = front; i < MAX; i++) {
            printf("%d ", queue[i]);
        }
        for (int i = 0; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

int main() {
    int choice, data;

    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}