#include<stdio.h>
#define N 5
int Queue[N];
int front = -1;
int rear = -1;
void enqueue(int);
int main(){
int x;
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(56);
enqueue(99);
display();
dequeue();
dequeue();
display();
enqueue(111);
enqueue(222);
return 0;
}

void enqueue(int x){
    if(front == -1 && rear == -1){
        front = rear = 0;
        Queue[rear]=x;
    }
    else if((rear+1)%N==front){
        printf("Queue is Full\n");
    }
    else{
        rear = (rear+1)%N;
        Queue[rear]=x;
    }
}
void dequeue(){
    if(front == -1 && rear==-1){
        printf("List is Empty\n");
    }
    else if(front==rear){
        printf("dequeue element is %d\n",Queue[front]);
        front = rear = -1;
    }
    else{
        printf("dequeue element is %d\n",Queue[front]);
        front = (front+1)%N;
    }
}

void display(){
    int i=front;
    if(front == -1 && rear==-1){
        printf("List is Empty\n");
    }
    else{
        printf("Queue......\n");
       while(i != rear){
        printf("%d\n",Queue[i]);
        i = (i+1)%N;
       }
       printf("%d\n",Queue[rear]);
    }
}