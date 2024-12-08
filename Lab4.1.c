#include<stdio.h>
#include<stdlib.h>
void display();
void count();
void insertAtBeg();
void insert();
void delete();
struct node{
    int data;
    struct node*next;
};
struct node*newnode;
struct node*Head;
struct node*temp;
int main(){
    int pre;
Head = 0;
int choice = 1;
while(choice){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the Elements\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(Head==0){
        Head = temp = newnode;
    }
    else{
       temp->next=newnode;
       temp = newnode; 
    }
    printf("press 1 for continue\n");
    scanf("%d",&choice);
}
while(1){
    printf("\nmenu :\n");
    printf("1.press 1 for traverse the linked list\n");
    printf("2.press 2 for count the linked list\n");
    printf("3.press 3 for insertion in the linked list\n");
    printf("4.press 4 for deletion in the linked list\n");
    printf("5.press 5 to InsertAtBeg\n");
    printf("6.press 6 to exit.....\n");
    printf("enter your preference\n");
    scanf("%d",&pre);
    switch (pre){
        case 1:
        display();
        break;
        case 2:
        count();
        break;
        case 3:
        insert();
        break;
        case 4:
        delete();
        break;
        case 5:
        insertAtBeg();
        case 6:
        printf("Exit....\n");
        return 0;
        default:
        printf("Invalid choice! try again\n");
        continue;
        
    }
}
 return 0;
}
void display(){
    printf("Displaying the Single Linked List\n");
    temp = Head;
    while(temp !=0){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}
void count(){
    int count=0;
     temp = Head;
    while(temp !=0){
        count ++;
        temp = temp->next;
    }
    printf("\nThe total number of nodes is %d\n",count);
}

void insert(){
    struct node*temp;
    int pos;
    int i=1;
    int count=0;
     temp = Head;
    while(temp !=0){
        count ++;
        temp = temp->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the position you want to insert\n");
scanf("%d",&pos);
if(pos>count){
    printf("Invalid position....opps\n");
}
else{
    temp = Head;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    printf("Enter data\n");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}
 printf("\nDisplaying the Single Linked List after insertion\n");
    temp = Head;
    while(temp !=0){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}
void delete(){
    int pos;
    int i=1;
    struct node*nextnode;
    temp = Head;
    printf("Enter the position you want to delete\n");
    scanf("%d",&pos);
    if(pos==1){
       Head = temp->next ;
       free(temp);
    }
    else{
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
    }
   printf("\nDisplaying the Single Linked List after Deletion\n");
    temp = Head;
    while(temp !=0){
        printf("%d\t",temp->data);
        temp = temp->next;
    } 
}

void insertAtBeg(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to insert At position 1st\n");
    scanf("%d\n",&newnode->data);
    newnode->next = Head;
    Head = newnode;
    printf("\nDisplaying the Single Linked List after Insertion at pos 1st\n");
    temp = Head;
    while(temp !=0){
        printf("%d\t",temp->data);
        temp = temp->next;
    } 
}