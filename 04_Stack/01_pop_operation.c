#include <stdio.h>
#include <stdlib.h>

// #define MAX 100

int stack[10];
int top = -1;

void push(int stack[], int size, int data) {
    if (top == size - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = data;
        printf("%d pushed to stack\n", data);
    }
}

int pop(int stack[]) {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        int data = stack[top];
        top--;
        return data;
    }
}

void display(int stack[]) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int size;
    int ch, data;
        printf("enter the size of the stack: ");
        scanf("%d", &size);

    do {
        printf("\n1. Push\n2. Pop\n3. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                if(top == size - 1){
                    printf("Stack is full\n");
                    break;
                }
                printf("Enter the element to push to stack: ");
                scanf("%d", &data);
                push(stack, size, data);
                printf("\nAfter performing operation as follows:\n");
                display(stack);
                break;
            case 2:
                data = pop(stack);
                if (data != -1) {
                    printf("The popped data is: %d\n", data);
                }
                printf("After performing pop operation:\n");
                display(stack);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (ch != 3);

    return 0;
}