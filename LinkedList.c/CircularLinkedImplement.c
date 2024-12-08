#include <stdio.h>
#include <stdlib.h>

void insertAtBeg();
void insertAtEnd();
void insert();
void deleteAtBeg();
void deleteAtEnd();
struct node {
    int data;
    struct node* next;
};

struct node* Head = NULL;
struct node* tail = NULL;
struct node* newnode;
struct node* temp;
int main() {
    int choice = 1;

    while (choice) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return 1; // Exit the program with an error code
        }

        printf("Enter the element in the Circular Linked List: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (Head == NULL) {
            Head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        tail->next = Head;

        printf("Press 1 to continue or 0 to Exit: ");
        scanf("%d", &choice);
    }

    printf("Circular Linked List:\n");
    struct node* temp = Head;
    if (temp != NULL) {
        do {
            printf("%d\n", temp->data);
            temp = temp->next;
        } while (temp != Head);
    }

    insertAtBeg();
    insertAtEnd();
    insert();
    deleteAtBeg();
    return 0;
}

void insertAtBeg() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit the program with an error code
    }

    printf("Enter data to insert at the beginning: ");
    scanf("%d", &newnode->data);
    newnode->next = Head;
    Head = newnode;

    // Update the tail's next pointer to point to the new head
    if (tail != NULL) {
        tail->next = Head;
    }

    printf("After insertion at the beginning:\n");
    struct node* temp = Head;
    if (temp != NULL) {
        do {
            printf("%d\t", temp->data);
            temp = temp->next;
        } while (temp != Head);
    }
    printf("\n");
}

void insertAtEnd(){
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the number you want to insert At End\n");
scanf("%d",&newnode->data);
newnode->next=tail->next;
tail->next=newnode;
temp=Head;
printf("\nAfter Insertion At End\n");
if(temp != NULL ){
    do {
        printf("%d\t",temp->data);
        temp=temp->next;
    } while(temp !=Head);
}  
printf("\n");
}
void insert(){
    int pos;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the position you want to insert number on\n");
    scanf("%d",&pos);
    printf("\nEnter the Element\n");
    scanf("%d",&newnode->data);
    int i=1;
    temp = Head;
    while(i<pos-1){
     temp=temp->next;
     i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    printf("\nAfter insertion At %d pos\n",pos);
    temp=Head;
    if(temp !=NULL){
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        } while(temp !=Head);
    }
    printf("\n");
}
void deleteAtBeg(){
    temp = tail->next;
if(tail==NULL){
    printf("\nInvalid\n");
}
else if(temp->next=temp){
  tail = 0;
  free(temp);
}
else{
    Head=Head->next;
    tail->next=Head;
    free(temp);
}
 printf("\nAfter Delete from pos 1\n");
    temp=Head;
    if(temp !=NULL){
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        } while(temp !=Head);
    }
    printf("\n");   
}
void deleteAtEnd(){
struct node*prev;
struct node*current;
current = tail->next;
while(current->next != tail->next){
    prev=current;
    current=current->next;
}
prev->next = tail->next;
tail = prev;
free(current);
printf("\nAfter deleting from Beg\n");
 temp=Head;
    if(temp !=NULL){
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        } while(temp !=Head);
    }
    printf("\n");  
}

