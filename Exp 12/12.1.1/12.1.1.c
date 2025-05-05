// Aim: 12.1.1. Develop menu driven program to implement stack operations including push, pop, overload and traversing allowing for analysis of stack behaviour and efficiency


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

bool isFull() {
    return top == MAX_SIZE - 1;
}

bool isEmpty() {
    return top == -1;
}

void push(int item) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", item);
        return;
    }
    stack[++top] = item;
    printf("%d pushed to stack\n", item);
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop from empty stack\n");
        return;
    }
    printf("%d popped from stack\n", stack[top--]);
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

void stackStatus() {
    printf("Stack status:\n");
    printf("Current size: %d\n", top + 1);
    printf("Maximum capacity: %d\n", MAX_SIZE);
    printf("Stack is %s\n", isFull() ? "full" : (isEmpty() ? "empty" : "partially filled"));
}

int main() {
    int choice, item;
    
    while (1) {
        printf("\nStack Operations Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Peek (View Top Element)\n");
        printf("5. Check Stack Status\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                stackStatus();
                break;
            case 6:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}