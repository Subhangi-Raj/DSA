#include<stdio.h>
#include<stdlib.h>
void push();
void peek();
void pop();
void display();
int isEmpty();
struct node{
    int data;
    struct node*next;
};
struct node*top;
int main(){
    top=0;
    int pre;
while(1){
    printf("\n:Menu\n");
    printf("1: press 1 for Push operation\n");
    printf("2: press 2 for pop operation\n");
    printf("3: press 3 for peek operation\n");
    printf("4: press 4 for display operation\n");
    printf("5:press 5 for isEmpty operation\n");
    printf("6: press 6 to Exit....\n");
    printf("Enter your Preference\n");
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
        display();
        break;
        case 5:
                if (isEmpty()) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;
        case 6:
        printf("Exit.....\n");
        return 0;
        default:
        printf("Invalid choice \n");
        continue;
            }
}
}
void push(){
    struct node*newnode;
    struct node*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Push Element in a Stack\n");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
    temp = top;
    printf("After push\n");
    while(temp !=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void peek(){
    if(top==0){
        printf("Empty stack\n");
    }
    else{
        printf("%d",top->data);;
    }
}
void pop(){
    struct node*temp;
    temp = top;
    if(top==0){
        printf("UnderFlow....\n");
    }
    else{
        printf("poped Element is : %d\n",top->data);
        top=top->next;
        free(temp);
    }
    temp = top;
    printf("\nAfter pop\n");
    while(temp !=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void display(){
    struct node*temp;
    temp = top;
    printf("Displaying Stack Elements:\t");
    while(temp !=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
int isEmpty(){
    return top==NULL;
}