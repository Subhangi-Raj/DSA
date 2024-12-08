#include <stdio.h>
#include <stdlib.h>

void insertAtBeg();
void insertAtEnd();
void DeleteFromBeg();
void DeleteFromEnd();
void insert();
void delete();
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *newnode;
struct node *temp;
struct node *Head = NULL;
struct node *tail = NULL;

int main() {
    int choice = 1;
    int pre;
    int count = 0;
    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the element: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        
        if (Head == NULL) {
            Head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        
        printf("Press 1 to continue, 0 to stop: ");
        scanf("%d", &choice);
    }
    
    
    printf("Displaying Doubly Linked List:\n");
    temp = Head;
    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
        count ++;
    }
    while(1){
        printf("menu:\n");
        printf("1:press 1 for Insertion At Begining\n");
        printf("2:press 2 for Insertion At End\n");
        printf("3:press 3 for Deletion from Begining\n");
        printf("4:press 4 for Deletion from End\n");
        printf("5:press 5 to  for insertion at a specific pos\n");
        printf("6:press 6 for delete a node from a specific position\n");
        printf(":7:press 7 to exit\n");
        printf("Enter your preference\n");
        scanf("%d",&pre);
        switch(pre){
            case 1:
            insertAtBeg();
            break;
            case 2:
            insertAtEnd();
            break;
            case 3:
             DeleteFromBeg();
             break;
             case 4:
             DeleteFromEnd();
             break;
             case 5:
             insert();
             break;
             case 6:
             delete();
             break;
             case 7:
             printf("Exit......\n");
             return 0;
             default:
             printf("invalid choice\n");
             continue;
        }
    }
    return 0;
}

// Function to insert a node at the beginning of the list
void insertAtBeg() {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the element you want to insert at position 1st: ");
    scanf("%d", &newnode->data);
    newnode->next = Head;
    newnode->prev = NULL;
    Head=newnode;
    if (Head != NULL) {
        Head->prev = newnode;
    }
    Head = newnode;
    printf("After insertion At 1st pos\n");
    temp = Head;
    while(temp !=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void insertAtEnd() {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to store at the end: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = tail;
    
    if (tail != NULL) {
        tail->next = newnode;
    }
    tail = newnode;
    printf("After Insertion At End pos\n");
    temp = Head;
    while(temp !=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void DeleteFromBeg(){
    if(Head==0){
        printf("List is Empty");
    }
    else{
        temp = Head;
        Head = Head->next;
        Head->prev=0;
        free(temp);
    }
    printf("After deletion from 1st pos\n");
    temp = Head;
    while(temp !=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void DeleteFromEnd(){
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
    printf("After deletion from End pos\n");
    temp = Head;
    while(temp !=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void insert(){
    int i=1;
    int pos;
    temp=Head;
    printf("Enter the position you want to insert number on..\n");
    scanf("%d",&pos);
    if(pos==1){
        insertAtBeg();
    }
    else{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&newnode->data);
        while(i < pos-1){
            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
       // newnode->next->prev=newnode;
    }
    printf("After insertion At any pos\n");
    temp = Head;
    while(temp !=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void delete(){
    struct node*temp;
    int pos;
    int i=1;
    temp=Head;
    printf("Enter position\n");
    while(pos<i){
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    printf("After Deletion from a specific position\n");
    temp = Head;
    while(temp !=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}






