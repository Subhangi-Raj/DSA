#include<stdio.h>
#include<stdlib.h>
void enqueue(int);
void display();
void dequeue();
struct node{
    int data;
    struct node*next;
};
struct node*front = 0;
struct node*rear = 0;
int main(){
    enqueue(2);
    enqueue(33);
    enqueue(44);
    enqueue(55);
    display();
    dequeue();
    display();
    return 0;
}

void enqueue(int x){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if(front == 0 && rear==0){
        front = rear = newnode;
    }
    else {
        rear->next = newnode;
        rear = newnode;
    }
}
void display(){
    struct node*temp;
    printf("Displaying Elments in Queue using Linked List\n");
    if(front == 0 && rear == 0){
        printf("List is empty\n");
    }
    else{
        temp = front;
        while(temp !=0){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}

void dequeue(){
       struct node*temp;
       temp = front;
       if(front==0){
        printf("Queue is empty\n");
       }
       else{
        printf("Dequeue is %d\n",front->data);
        front = front->next;
        free(temp);
       }
}
