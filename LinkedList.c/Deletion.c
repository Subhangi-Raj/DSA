#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *Head, *temp, *newnode;

void DeletionBeg() {
    struct node *temp;
    if (Head == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = Head;
    Head = Head->next;
    free(temp);
}

void DeletionEnd() {
    struct node *temp, *prevnode;
    if (Head == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = Head;
    if (temp->next == NULL) {
        Head = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL) {
        prevnode = temp;
        temp = temp->next;
    }
    prevnode->next = NULL;
    free(temp);
}

int main() {
    int choice = 1;
    Head = NULL;

    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter number you want to store: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (Head == NULL) {
            Head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Press 1 if you want to continue or else 0: ");
        scanf("%d", &choice);
    }

    printf("Before Deletion of 1st Element:\n");
    temp = Head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    DeletionBeg();
    printf("After Deletion of 1st Element:\n");
    temp = Head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    DeletionEnd();
    printf("After Deletion from End:\n");
    temp = Head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}