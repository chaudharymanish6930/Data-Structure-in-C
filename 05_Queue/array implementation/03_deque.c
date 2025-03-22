#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int deque[MAX];
int front = -1;
int rear = -1;

void insertFront(int data) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Deque overflow\n");
        return;
    } else if (front == -1) { // Insert first element
        front = rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front--;
    }
    deque[front] = data;
    printf("%d inserted at front\n", data);
}

void insertRear(int data) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Deque overflow\n");
        return;
    } else if (rear == -1) { // Insert first element
        front = rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = data;
    printf("%d inserted at rear\n", data);
}

void deleteFront() {
    if (front == -1) {
        printf("Deque underflow\n");
        return;
    }
    int data = deque[front];
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
    printf("%d deleted from front\n", data);
}

void deleteRear() {
    if (rear == -1) {
        printf("Deque underflow\n");
        return;
    }
    int data = deque[rear];
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear--;
    }
    printf("%d deleted from rear\n", data);
}

void display() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }
    printf("Deque elements are: ");
    if (rear >= front) {
        for (int i = front; i <= rear; i++) {
            printf("%d ", deque[i]);
        }
    } else {
        for (int i = front; i < MAX; i++) {
            printf("%d ", deque[i]);
        }
        for (int i = 0; i <= rear; i++) {
            printf("%d ", deque[i]);
        }
    }
    printf("\n");
}

int main() {
    int choice, data;

    do {
        printf("\n1. Insert at front\n2. Insert at rear\n3. Delete from front\n4. Delete from rear\n5. Display\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to insert at front: ");
                scanf("%d", &data);
                insertFront(data);
                break;
            case 2:
                printf("Enter the element to insert at rear: ");
                scanf("%d", &data);
                insertRear(data);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 6);

    return 0;
}