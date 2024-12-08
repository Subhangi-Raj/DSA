#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*Head;
struct node*newnode;
struct node*temp;
struct node*tail;
void InsertAtEnd(int);
void InsertAtEnd(int x){
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = x;
newnode->next = 0;
if(tail==0){
    tail = newnode;
    tail->next = newnode;
}
else{
    newnode->next = tail->next;
    tail->next = newnode;
    tail = newnode;
}
}
int main(){
    int choice = 1,x,y;
    Head=0;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the element in a Circular Linked List\n");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(Head==0){
            Head = tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
        tail->next = Head;
        printf("Press 1 to continue or 0 to Exit\n");
        scanf("%d",&choice);
    }
printf("Circular linked List ");
printf("\n");
temp = Head;
while(temp->next !=Head){
    printf("%d\n" ,temp->data);
    temp = temp->next;
}
printf("%d",temp->data);
printf("\n");
printf("Enter the number you want to Insert At End of a Circular Linked List ");
scanf("%d",&x);
InsertAtEnd(x);
printf("After Insertion Element in End \n");
temp = Head;
while(temp->next !=Head){
    printf("%d\n" ,temp->data);
    temp = temp->next;
}
printf("%d",temp->data);
}
