#include <stdio.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int);
void display();
void dequeue();
void peek();

int main() {
    int x;
    int choice;

    while (1) {
        printf("1. Enqueue\n2. Display\n3. Dequeue\n4. Peek\n5. Exit\n.6.exiting\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element you want to enqueue: ");
                scanf("%d", &x);
                enqueue(x);
                break;
                
            case 2:
                display();
                break;
                
            case 3:
                dequeue();
                break;
                
            case 4:
                peek();
                break;
                
            case 5:
                printf("Exiting...\n");
                break;
                case 6:
                printf("Exiting \n");
                return 0;
                
            default:
                printf("Invalid choice. Please try again.\n");
                continue;
        }
    }

    return 0;
}

void enqueue(int x) {
    if (rear == N - 1) {
        printf("Overflow\n");
    } else if (front == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
}

void display() {
    printf("Displaying Queue:\n");
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        for (int i = front; i <= rear; i++) {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Removing element: %d\n", queue[front]);
        if (front == rear) { // Only one element in the queue
            front = rear = -1;
        } else {
            front++;
        }
    }
}

void peek() {
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("The front value is %d\n", queue[front]);
    }
}
