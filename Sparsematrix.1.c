#include<stdio.h>
int main(){
    int sparse[4][5]= {{0,0,3,0,4},
                       {0,0,5,7,0},
                       {0,0,0,0,0},
                       {0,2,6,0,0}
                       };
    int size=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(sparse[i][j] !=0){
                size++;
            }
        }
    } 
    int sm[size+1][3];
    int k=0;
    sm[k][0]=4 , sm[k][1]=5 , sm[k][2]=size;
    k++;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(sparse[i][j] !=0){
             sm[k][0]=i;
             sm[k][1]=j;
             sm[k][2]=sparse[i][j];
             k++;
            }
        }
    } 
    printf("Sparse matric in tupple form\n") ;
    for(int i=0;i<size;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sm[i][j]);
        }
        printf("\n");
    } 
    return 0;               
}