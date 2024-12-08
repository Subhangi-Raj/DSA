#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
void peek();
struct node{
    int data;
    struct node*next;
};
struct node*newnode;
struct node*rear;
struct node*front;
struct node*temp;
int main(){
    front = 0;
    rear = 0;
    int choice;
    while(1){
        printf("Menu\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Peek\n");
        printf("5.Exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            peek();
            break;
            case 5:
            printf("Existing\n");
            return 0;
            default:
            printf("Invalid choice\n");
            continue;

        }
    }
    return 0;
}

void enqueue(){
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter element\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(front==0){
    front=rear=newnode;
}
else{
    rear->next=newnode;
    rear=newnode;
}
}
void display(){
    temp=front;
    if(front==0){
        printf("Queue is Empty\n");
    }
    else{
        while(temp!=0){
            printf("%d\t",temp->data);
            temp=temp->next;
        }

    }
}

void dequeue(){
    temp = front;
    if(front==0){
        printf("Queue is Empty\n");
    }
    else{
        printf("%d dequeue value",front->data);
        front =  front->next;
        free(temp);
    }
}
void peek(){
    printf("front value is %d",front->data);
}