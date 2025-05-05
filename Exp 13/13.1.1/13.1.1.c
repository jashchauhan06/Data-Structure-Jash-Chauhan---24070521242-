// Aim: 13.1.1. Create a menu driven program to implement queue operations such as n-queue, d-queue, overload, underload and traversing enabling evaluation of queue engagement and performance characteristics

#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Enqueue
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overload! (Queue is full)\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("Inserted %d\n", value);
    }
}

// Dequeue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underload! (Queue is empty)\n");
    } else {
        printf("Deleted: %d\n", queue[front]);
        front++;
    }
}

// Traverse
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Engagement/Performance Characteristics
void evaluate() {
    int size = (front == -1 || front > rear) ? 0 : (rear - front + 1);
    printf("Queue Engagement:\n");
    printf("  - Current Size: %d\n", size);
    printf("  - Is Full: %s\n", (rear == SIZE - 1) ? "Yes" : "No");
    printf("  - Is Empty: %s\n", (front == -1 || front > rear) ? "Yes" : "No");
}

int main() {
    int choice, value;
    do {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue (n-queue)\n");
        printf("2. Dequeue (d-queue)\n");
        printf("3. Display (Traverse)\n");
        printf("4. Evaluate Engagement\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                evaluate();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 5);

    return 0;
}