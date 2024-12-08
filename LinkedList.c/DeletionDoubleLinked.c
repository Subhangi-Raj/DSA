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
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
printf("List After Delete the Element From Beg ");
printf("\n");
DeleteFromBeg();
DeleteFromEnd();
temp = Head;
while(temp !=0){
    printf("%d ",temp->data);
    temp=temp->next;
}
getc;
}
