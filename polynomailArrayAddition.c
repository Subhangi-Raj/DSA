#include<stdio.h>
#include<math.h>
struct poly{
    float coeff;
    int expo;
};
struct poly a[20],b[20],c[20];
void main(){
    int k=0;
    int l=0;
    int m=0;
    int deg1,deg2;
    int i;
    printf("Enter the highest degree for term 1\n");
    scanf("%d",&deg1);
    for(int i=0;i<=deg1;i++){
        printf("\nEnter the coeff of X^%d:",i);
        scanf("%f",&a[i].coeff);
        a[k++].expo=i;
    }
    printf("Enter the highest degree for term 2\n");
    scanf("%d",&deg2);
    for(int i=0;i<=deg2;i++){
        printf("\nEnter the coeff of X^%d:",i);
        scanf("%f",&b[i].coeff);
        b[l++].expo=i;
    }
    printf("\n Expression 1 = %.1f",a[0].coeff);
    for(int i=1;i<=deg1;i++){
        printf("+ %.1fX^%d",a[i].coeff,a[i].expo);
    }
    printf("\n Expression 2 = %.1f",b[0].coeff);
    for(int i=1;i<=deg2;i++){
        printf("+ %.1fX^%d",b[i].coeff,b[i].expo);
    }
    if(deg1>deg2){
        for(int i=0;i<=deg2;i++){
            c[m].coeff=a[i].coeff+b[i].coeff;
            c[m].expo=a[i].expo;
            m++;
        }
        for(int i=deg2+1;i<=deg1;i++){
            c[m].coeff=a[i].coeff;
            c[m].expo=a[i].expo;
            m++;
        }
    }
    else{
        for(int i=0;i<=deg1;i++){
            c[m].coeff=a[i].coeff + b[i].coeff;
            c[m].expo=a[i].expo;
            m++;
        }
        for(int i=deg1+1;i<=deg2;i++){
            c[m].coeff=b[i].coeff;
            c[m].expo=b[i].expo;
            m++;
        }
    }
    printf("\n Expression After Addition = %.1f",c[0].coeff);
    for(int i=1;i<m;i++){
        printf("+ %.1fX^%d",c[i].coeff,c[i].expo);
    }
}