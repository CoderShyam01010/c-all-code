#include <stdio.h>
#include <stdlib.h>

#define N 5

int stack[N];
int top = -1;

void push() {
    int x, choice = 1;
    while (choice) {
        printf("Enter data: ");
        scanf("%d", &x);
        if (top == (N - 1)) {
            printf("Stack overflow\n");
        } else {
            top++;
            stack[top] = x;
        }
        printf("Want to insert data in stack? (0/1): ");
        scanf("%d", &choice);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        int data = stack[top];
        top--;
        printf("Popped element: %d\n", data);
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    do {
        printf("Enter choice:\n1. Push\n2. Pop\n3. Peek\n4. Display\n0. Exit\n");
        printf("Press: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}
