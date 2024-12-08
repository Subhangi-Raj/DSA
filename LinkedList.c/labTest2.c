#include <stdio.h>
#include <stdlib.h>

void search();

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
    search();
    return 0;
}

void search() {
    int num;
    printf("Enter the number you want to search: ");
    scanf("%d", &num);
    temp = Head;
    int pos = 1;
    int found = 0;
    while (temp != NULL) {
        if (num == temp->data) {
            printf("Searched number is found at %dth position: num-%d\n", pos, temp->data);
            found = 1;
            break;
        }
        temp = temp->next;
        pos++;
    }

    if (!found) {
        printf("Element not found... sorry\n");
    }
}

