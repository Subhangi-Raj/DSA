#include<stdio.h>
void swap(int,int);
void main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d", &a,&b);
    printf("The number without Swapping %d and %d",a,b);
    swap(a,b);
    printf("The number After Swapping is %d and %d",a,b);
    printf("Test");
}
    void swap(int x,int y){
        int z;
        z = x;
        x = y;
        y = z;
    }


