#include <stdio.h>
#include <stdlib.h>
void reverse();
struct node {
    int data;
    struct node *next;
};

struct node *Head = NULL;
struct node *newnode;
struct node *temp;

int main() {
    int choice = 1;
    int num;
    int pre;

    // Create the linked list
    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter number you want to store in Single Linked List: ");
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
    
    // Display the list
    printf("Your final linked list:\n");
    temp = Head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    reverse();
    return 0;
}
void reverse(){
    struct node *prevnode = NULL;
    struct node *currentnode = Head;
    struct node *nextnode = NULL;

    while (currentnode != NULL) {
        nextnode = currentnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    Head = prevnode;

    printf("After reversing:\n");
    temp = Head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
