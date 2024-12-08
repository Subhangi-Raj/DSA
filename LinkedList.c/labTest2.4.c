#include<stdio.h>
#include<stdlib.h>
void insertAtBeg();
struct node {
    int data;
    struct node*next;
};

struct node *Head;
struct node *newnode;
struct node *temp;

int main() {
    int choice = 1;
Head=0;
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
    insertAtBeg();
    return 0;
}
void insertAtBeg(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to insert At position 1st\n");
    scanf("%d\n",&newnode->data);
    newnode->next = Head;
    Head = newnode;
    printf("\nDisplaying the Single Linked List after Insertion at pos 1st\n");
    temp = Head;
    while(temp->next !=NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    } 
}