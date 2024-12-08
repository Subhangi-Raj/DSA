#include<stdio.h>
#define N 5
int Queue[N];
int front = -1;
int rear = -1;
void enqueue(int);
void dequeue();
void display();
int x,choice;
int main(){
    printf("Enter the elements in the Queue\n");
for(int i=0;i<N;i++){
    scanf("%d",&x);
    enqueue(x);
}
display();
dequeue();
display();
    return 0;
}
void enqueue(int x){
    if(rear == N-1){
        printf("Overflow\n");
    }
    else if(front == -1 && rear==-1){
        front = rear = 0;
        Queue[rear] = x;
    }
    else {
        rear++;
        Queue[rear] = x;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue is Empty\n");
    }
    else if(front==rear){
        front = rear = -1;
    }
    else{
        printf("dequeue element is %d",Queue[front]);
        front++;
    }
}

void display(){
    int i;
    if(front == -1 && rear == -1){
        printf("Queue is Empty\n");
    }
    else{
        printf("Displaying the Elements in a Queue\n");
        for(int i=front ; i < rear+1; i++){
            printf("%d\n",Queue[i]);
        }
    }
}