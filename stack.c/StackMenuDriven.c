#include<stdio.h>
#define N 5
int Stack[N];
int top = -1;
void push();
void pop();
void peek();
void Display();
int isFull();
int isEmpty();
int main(){
    int pre;
    while(1){
        printf("\nMenu:\n");
        printf("1: press 1 for Push operation\n");
        printf("2: press 2 for Pop operation\n");
        printf("3: press 3 for peek operation\n");
        printf("4: press 4 to Display operation\n");
        printf("5: press 5 for isFull() operation\n");
        printf("6: press 6 for isEmpty() operation\n");
        printf("7: press 7 to Exit....\n");
        printf("Enter your preference\n");
        scanf("%d",&pre);
        switch(pre){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            Display();
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
            printf("Exit......\n");
            return 0;
            default:
            printf("oops invalid choice\n");
            continue;
        }
    }
    return 0;
}
void push(){
    int x;
    printf("Enter the Element\n");
    scanf("%d",&x);
    if(top==N-1){
        printf("overflow...\n");
    }
    else{
        top++;
        Stack[top] = x;
    }
    printf("\nDisplaying Stack Elements After push  operation\n");
        for(int i=top;i>=0;i--){
            printf("%d\t",Stack[i]);
        }
}
void pop(){
int num;
int i;
if(top==-1){
    printf("UnderFlow.....\n");
}
else{
    num=Stack[top];
    top--;
    printf("\npoped Element is: %d",num);
}
printf("\nDisplaying Stack Elements After pop operation\n");
        for(int i=top;i>=0;i--){
            printf("%d\t",Stack[i]);
        }
}
void peek(){
    if(top==-1){
        printf("UnderFlow..\n");
    }
    else{
        printf("\nPeek gives the Top most Value in the Stack : %d",Stack[top]);
    }
}
void Display(){
    int i;
    if(top==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("\nDisplaying Stack Elements\n");
        for(int i=top;i>=0;i--){
            printf("%d\t",Stack[i]);
        }
    }
}
int isFull(){
    return top==N-1;
}
int isEmpty(){
    return top==-1;
}
