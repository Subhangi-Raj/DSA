#include<stdio.h>
#include<stdlib.h>
void enqueue(int);
void dequeue();
void display();
struct node{
    int data;
    struct node*next;
};
struct node*front=0;
struct node*rear=0;
int main(){
    enqueue(5);
    enqueue(44);
    enqueue(66);
    enqueue(77);
    enqueue(90);
    display();
    dequeue();
    display();
    return 0;
}
void enqueue(int x){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0 && rear==0){
        front = rear = newnode;
        rear->next = front;
    }
    else{
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue(){
    struct node*temp;
    temp = front;
    if(front == 0 && rear==0){
        printf("Queue is Empty\n");
    }
    else if(front = rear){
        front = rear = 0;
        free(temp);
    }
    else{
        front = front->next;
        rear->next=front;
        free(temp);

    }
}

void display(){
    printf("Displaying Circular Queue using Linked List.....\n");
    struct node*temp;
    temp = front;
    if(front == 0 && rear == 0){
        printf("Underflow..\n");
    }
    else {
     while(temp->next != front){
        printf("%d\n",temp->data);
        temp = temp->next;
     }
      printf("%d\n",temp->data);
    }
}
