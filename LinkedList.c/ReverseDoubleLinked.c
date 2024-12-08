#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
struct node*newnode;
struct node*temp;
struct node*Head;
struct node*tail;
void reverse();
void reverse(){
struct node*currentnode;
struct node*nextnode;
currentnode = Head;
while(currentnode !=0){
nextnode = currentnode->next;
currentnode->next = currentnode->prev;
currentnode->prev = nextnode;
currentnode = nextnode;
}
currentnode = Head;
Head = tail;
tail = currentnode;
}
int main(){
    int choice = 1;
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
printf("Your Final Double Linked List\n ");
temp = Head;
while(temp !=0){
    printf("%d\n",temp->data);
    temp=temp->next;
}
printf("\nAfter Reversing Double Linked list");
printf("\n");
reverse();
temp = Head;
while(temp !=0){
    printf("%d\n",temp->data);
    temp=temp->next;
}
getc;
}
