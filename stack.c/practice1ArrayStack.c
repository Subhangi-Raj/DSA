#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push();
void peek();
void pop();
void display();
int isEmpty();
int isFull();
int main(){
    int choice;
    while(1){
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.peek\n");
        printf("5.isFull\n");
        printf("6.isEmpty\n");
        printf("7.Exit\n");
        printf("Enter choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            push();
            break;
             case 2:
            pop();
            break;
             case 3:
            display();
            break;
            case 4:
            peek();
            break;
             case 5:
            if (isFull()) {
                    printf("Stack is full.\n");
                } else {
                    printf("Stack is not full.\n");
                }
                break;
            case 6:
            if (isEmpty()) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
            break;
            case 7:
            printf("Exit.....\n");
            return 0;
            default: 
            printf("Invalid choice...\n");
            continue;

        }
    }
    return 0;
}

void push(){
    int x;
    printf("Enter Element\n");
    scanf("%d",&x);
    if(top==N-1){
        printf("Overflow\n");
    }
     else if(top==-1){
        top=0;
        stack[top]=x;
    }
    else{
        top++;
        stack[top]=x;
    }
}
 void pop(){
    if(top==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("poped element is %d\n",stack[top]);
        top--;
    }
 }

 void peek(){
    if(top==-1){
        printf("stack is Empty\n");
    }
    else{
        printf("peek element is %d",stack[top]);
    }
 }

 void display(){
    printf("Displaying Elements\n");
    for(int i=top;i>=0;i--){
        printf("%d\t",stack[i]);
    }
 }
 int isFull(){
 return top==N-1;
 }
 int isEmpty(){
    return top==-1;
 }