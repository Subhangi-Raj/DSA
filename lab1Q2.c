#include<stdio.h>
int check(int,int);
void main(){
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d", &a,&b);
   

    c = check(a,b);
    printf("Greatest number is  %d" , c);
}
    int check(int x,int y){
        int z;
        if(x>y){
            z = x;

        }
        else{
            z = y;
        }
        return z;
        
    }


