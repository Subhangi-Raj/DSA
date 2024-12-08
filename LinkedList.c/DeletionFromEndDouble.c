#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* newnode;
struct node* temp;
struct node* Head;
struct node* tail;

void DeletionEnd() {
    if (tail == NULL) {
        printf("The list is Empty\n");
    } else if (tail->prev == NULL) {
        // List has only one node
        free(tail);
        Head = NULL;
        tail = NULL;
    } else {
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
    }
}

int main() {
    int choice = 1;
    Head = NULL;

    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the Elements in a Double Linked List: ");
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (Head == NULL) {
            Head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("Press 1 to continue and 0 to exit: ");
        scanf("%d", &choice);
    }

    printf("Your Final Double Linked List:\n");
    temp = Head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\nYour Double Linked List After Deletion From End:\n");
    DeletionEnd();
    temp = Head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}