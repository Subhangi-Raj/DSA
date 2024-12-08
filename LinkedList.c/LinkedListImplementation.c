#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node*Head;
struct node*newnode;
struct node*temp;
int main(){
    int choice = 1;
    Head = 0;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter number you want to store in Single Linked LIst ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(Head==0){
            Head = temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Press 1 if you want to continue or else 0 ");
        scanf("%d" , &choice);
    }
    printf("Your final linked list ");
    temp = Head;
    while(temp !=0){
        printf("%d\n", temp->data);
        temp=temp->next;
    }
    getc;
}