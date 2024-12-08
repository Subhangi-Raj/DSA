#include<stdio.h>

void Delete(int arr[],int pos,int n){
        printf("Enter the position you want to delete");
        scanf("%d" ,&pos);
        for(int i=pos-1;i<n;i++){
            arr[i] = arr[i+1];
        }
        printf("Array after Deletion");
        for(int i=0;i<n-1;i++){
            printf("%d ",arr[i]);
        }
    }


    

   void Insert(int arr[],int n,int pos,int num){
    for(int j=n;j>=pos;j--){
        arr[j+1] = arr[j];
    }
    arr[pos] = num;
    printf("After Insertion the Array is");
    for(int i=0;i<n+1;i++){
        printf("%d\n",arr[i]);
    }
   }

    
int main(){
    int n=1,i,pos,num,ch=1;
    
    printf("Enter the size of an array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an Array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    while(ch!=0)
    {
        printf("enter your choice 1 for insertion \n 2 for deletion \n 3 for traversion");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: 
        printf("Enter Position and number");
        scanf("%d%d",&pos,&n);
        Insert(arr,n,pos,num);
        break;
        case 2: 
        printf("Enter Position");
        scanf("%d",&pos);
        Delete(arr,pos,n);
        break;
        
    }

}
return 0;
}
    