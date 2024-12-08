#include<stdio.h>
#define N 5
int Queue[N];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
int main(){
int pre;
while(1){
    printf("Menu:\n");
    printf("1: press 1 for enqueue operation\n");
    printf("2: press 2 for dequeue operation\n");
    printf("3: press 3 for Display operation\n");
    printf("4: press 4 for peek operation\n");
    printf("5: press 5 to Exit...\n");
    printf("Enter your Preference\n");
    scanf("%d",&pre);
    switch(pre){
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
        printf("Exit.....\n");
        return 0;
        default:
        printf("Invalid choice , ooopssssss.....\n");
        continue;
    }
}
}
void enqueue(){
    printf("Enter Element\n");
    if(rear==N-1){
     printf("Overflow...\n");
    }
    else if(front = rear = -1){
        front = rear = 0;
        Queue[rear] = 
    }
}