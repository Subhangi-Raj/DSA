#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node*Head;
struct node*newnode;
struct node*temp;
void InserBeg(int);
void InsertAtEnd(int);
void InsertBeg(int x){
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next = Head;
Head = newnode;
}
void InsertAtEnd(int y){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=y;
    newnode->next = 0;
    temp = Head;
    while(temp->next !=0){
        temp = temp->next;
    }
    temp->next = newnode;
}
int main(){
    int choice = 1,x,y;
    Head = 0;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter number you want to store ");
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
    printf("Before using the function of InsertAtBeg and InsertAtEnd ");
    temp = Head;
    while(temp !=0){
        printf("%d\n", temp->data);
        temp=temp->next;
    }
    printf("Enter the number you want to Insert At Beg ");
    scanf("%d",&x);
    InsertBeg(x);
    printf("Enter the number you want to Insert At End ");
    scanf("%d",&y);
    InsertAtEnd(y);
    printf("After Insertion At first And last position ");
    temp = Head;
    while(temp !=0){
        printf("%d\n", temp->data);
        temp=temp->next;

}
getc;
}