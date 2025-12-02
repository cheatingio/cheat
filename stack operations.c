#include <stdio.h>
#include <stdlib.h> // For exit()

#define MAX_SIZE 5 // Define the maximum size of the stack

int stack[MAX_SIZE]; // Array to store stack elements
int top = -1;        // Index of the top element, -1 indicates an empty stack

// Function to check if the stack is empty
int isEmpty() {
    return (top == -1);
}

// Function to check if the stack is full
int isFull() {
    return (top == MAX_SIZE - 1);
}

// Function to push an element onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow: Cannot push %d, stack is full.\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("Pushed %d onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow: Cannot pop, stack is empty.\n");
        return -1; // Indicate an error or empty stack
    } else {
        int poppedValue = stack[top];
        top--;
        printf("Popped %d from the stack.\n", poppedValue);
        return poppedValue;
    }
}

// Function to peek at the top element of the stack without removing it
int peek() {
    if (isEmpty()) {
        printf("Stack is empty, no element to peek.\n");
        return -1; // Indicate an error or empty stack
    } else {
        return stack[top];
    }
}

// Function to display the elements of the stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements (top to bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                value = peek();
                if (value != -1) {
                    printf("Top element: %d\n", value);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
