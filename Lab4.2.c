#include <stdio.h>
#include <stdlib.h>

void sort();
void search();
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


    while (1) {
        printf("\nMenu:\n");
        printf("1: Search a list\n");
        printf("2: Sort the list\n");
        printf("3: Reverse the list\n");
        printf("4: Exit\n");
        printf("Enter your preference: ");
        scanf("%d", &pre);

        switch (pre) {
            case 1:
                search();
                break;
            case 2:
                sort();
                break;
            case 3:
                reverse();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice...\n");
                break;
        }
    }
    
    return 0;
}


void sort() {
    struct node *current;
    struct node *index;
    int tempData;

    if (Head == NULL) {
        printf("List is empty\n");
        return;
    }

    current = Head;
    while (current != NULL) {
        index = current->next;
        while (index != NULL) {
            if (current->data > index->data) {
                // Swap data
                tempData = current->data;
                current->data = index->data;
                index->data = tempData;
            }
            index = index->next;
        }
        current = current->next;
    }
    printf("After sorting, the linked list is:\n");
    temp = Head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Function to search for an element in the linked list
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

// Function to reverse the linked list
void reverse() {
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