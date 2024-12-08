#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*newnode;
struct node*tail;
struct node*Head;
struct node*temp;
int main(){
    int choice = 1;
    Head = 0;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data in the Circular Linked list\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(Head==0){
        Head = tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
    tail->next = Head;
    printf(":press 1 to continue\n");
    scanf("%d",&choice);
    }
    printf("Displaying Your Final created Circular Linked List\n");
    temp = Head;
    while(temp->next !=Head){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
    return 0;
}