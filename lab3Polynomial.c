#include<stdio.h>
int main(){
    int n,m,q,x;
    printf("Enter the Size in Array 1st\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the Elements in Array 1st (a + bx + cx^2 +dx^3 ......\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the Size of an Array 2nd");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the elements in an Array 2nd (a + bx + cx^2 +dx^3 ......\n");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    if(m>n){
        q = m;
        int sum[q];
        for(int i=0;i<m;i++){
            sum[i]=arr1[i];
        }
        for(int j=0;j<m;j++){
            sum[j] = sum[j] + arr1[j];
        }
    }
    else{
        q = n;
        int sum[q];
        for(int i=0;i<n;i++){
            sum[i]=arr2[i];
        }
        for(int j=0;j<n;j++){
            sum[j] = sum[j] + arr2[j];
        }
    }
    int sum[q];
    printf("Copying the elements in Array Sum from largest Array");
    printf("\n1st polynomial: %dx^0", arr1[0]);
    for(int i = 1; i < m; i++){
        printf(" + %dx^%d", arr1[i], i);
    }
     printf("\n2st polynomial: %dx^0", arr2[0]);
    for(int i = 1; i < n; i++){
        printf(" + %dx^%d", arr2[i], i);
    }
    printf("\nresultant polynomial: %dx^0", sum[0]);
    for(int i = 1; i < q; i++){
        printf(" + %dx^%d", sum[i], i);
    }


}