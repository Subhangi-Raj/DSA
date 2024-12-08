#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
struct node*tail;
struct node*newnode;
struct node*temp;
struct node*Head;
void InsertAtBeg(int);
void InsertAtEnd(int);
void InsertAtBeg(int x){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next=Head;
    newnode->prev=0;
    Head=newnode;
}
void InsertAtEnd(int y){
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = y;
tail->next = newnode;
newnode->prev = tail;
tail = newnode;
}
int main(){
    int choice = 1,x,y;
    Head = 0;
    while(choice){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the Elements in a  Double Linked List ");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(Head==0){
        Head = tail = newnode;
    }
    else{
      tail->next = newnode;
      newnode->prev = tail;
      tail = newnode;
    }
    printf("press 1 for continue and 0 for exit ");
    scanf("%d",&choice);
}
printf("Your Final Double Linked List Before Insert at Beg or End\n ");
temp = Head;
while(temp !=0){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\nEnter the number you Want to insert ");
scanf("%d",&x);
InsertAtBeg(x);
printf("\nAfter Insertion At first position Your Double linked list is ");
printf("\n");
temp = Head;
while(temp !=0){
    printf("%d ",temp->data);
    temp = temp->next;
}
printf("\nEnter the data you want to Insert at the End of the Double Linked list ");
scanf("%d",&y);
InsertAtEnd(y);
printf("\nAfter Insertion At last position Your Double linked list is ");
printf("\n");
temp = Head;
while(temp !=0){
    printf("%d ",temp->data);
    temp = temp->next;
}
getc;
}
