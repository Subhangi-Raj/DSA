#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head1;
struct node*head2;
struct node*temp;
struct node*temp1;
struct node*newnode;
int main(){
   head1 = 0;
   head2 = 0;
   int choice = 1;
   printf("Enter five Elemnts for List 1\n");
   while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Element\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head1==0){
        head1=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Enter 1 to continue 0 to exit\n");
    scanf("%d",&choice);
   } 
   printf("\nDisplaying the 1st Linked List");
   temp =head1;
   while(temp !=0){
    printf("%d\t",temp->data);
    temp=temp->next;
   }
   printf("\nEnter five Elemnts for List 2\n");
   while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Element\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head2==0){
        head2=temp1=newnode;
    }
    else{
        temp1->next=newnode;
        temp1=newnode;
    }
    printf("Enter 1 to continue 0 to exit\n");
    scanf("%d",&choice);
   } 
   printf("\nDisplaying the 2nd Linked List");
   temp1 =head2;
   while(temp1 !=0){
    printf("%d\t",temp1->data);
    temp1=temp1->next;
   }
}