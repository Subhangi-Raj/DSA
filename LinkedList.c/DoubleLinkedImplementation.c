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
        Head = temp = newnode;
    }
    else{
      temp->next = newnode;
      newnode->prev = temp;
      temp = newnode;
    }
    printf("press 1 for continue and 0 for exit ");
    scanf("%d",&choice);
}
printf("Your Final Double Linked List\n ");
temp = Head;
while(temp !=0){
    printf("%d ",temp->data);
    temp=temp->next;
}
getc;
}
