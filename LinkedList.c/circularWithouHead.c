#include<stdio.h>
#include<stdlib.h>
void insertAtBeg();
void insertAtEnd();
void insert();
void deleteAtBeg();
void deleteAtEnd();
struct node{
    int data;
    struct node*next;
};
struct node*tail;
struct node*newnode;
struct node*temp;
int main(){
    tail = NULL;
    int choice = 1;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter The Num You Want To Insert In Circular Linked List: \n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(tail==NULL){
            tail=newnode;
            tail->next=newnode;
        }
        else{
            newnode->next = tail->next;
            tail->next = newnode;
            tail=newnode;
        }
        printf("Enter 1 To Continue Or 0 to Exit\n");
        scanf("%d",&choice);
    }
    printf("\nPrinting Circular Linked list\n");
    temp = tail->next;
    if(temp != NULL){
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        } while(temp->next != tail->next);
        printf("%d",temp->data);
    }
    printf("\n");
    insertAtBeg();
    insertAtEnd();
    insert();
    deleteAtBeg();
}

void insertAtBeg(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter num you Want to Insert\n");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(tail==NULL){
        printf("\nInvalid\n");
    }
    else{
        newnode->next = tail->next;
        tail->next = newnode;
    }
     printf("\nPrinting Circular Linked list After insertion At Beg\n");
    temp = tail->next;
    if(temp != NULL){
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        } while(temp->next != tail->next);
        printf("%d",temp->data);
    }
}

void insertAtEnd(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Data you want to insert At End\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(tail==NULL){
        tail=newnode;
        tail->next=newnode;
    }
    else{
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
     printf("\nPrinting Circular Linked list After insertion At End\n");
    temp = tail->next;
    if(temp != NULL){
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        } while(temp->next != tail->next);
        printf("%d",temp->data);
    }
}
void insert(){
    int pos;
    int i=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter position you want to insert number on\n");
    scanf("%d",&pos);
    printf("Enter the number you want to insert\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp = tail->next;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    printf("\nPrinting Circular Linked list After insertion At %d pos\n",pos);
    temp = tail->next;
    if(temp != NULL){
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        } while(temp->next != tail->next);
        printf("%d",temp->data);
    }
}
void deleteAtBeg(){
    struct node*current;
    current = tail->next;
    if(tail==NULL){
        printf("Invalid\n");
    }
     else{
        tail->next = current->next;
        free(current);
     }
    printf("\nPrinting Circular Linked list After Deletion At beg\n",pos);
    temp = tail->next;
    if(temp != NULL){
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        } while(temp->next != tail->next);
        printf("%d",temp->data);
    } 
}
 void deleteAtEnd(){
    struct node*current;
    struct node*prev;
    current = tail->next;
    if(tail==NULL){
        printf("Invalid\n");
    }
    else if(current->next=current){
        tail = NULL;
        free(current);
    }
    else{
        while(current->next != tail->next){
            prev = current;
            current = current->next;
        }
        prev->next = tail->next;
        tail = prev;
        free(current);
    }
     printf("\nPrinting Circular Linked list After Deletion At End\n",pos);
    temp = tail->next;
    if(temp != NULL){
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        } while(temp->next != tail->next);
        printf("%d",temp->data);
    } 
 }