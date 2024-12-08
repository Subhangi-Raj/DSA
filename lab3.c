#include <stdio.h>

void Insert(int []);
void Delete(int []);
void Linear(int []);

int n;
int r,c;
int main() {
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int choice;
    printf("Enter the elements in the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rows and colums for square matric\n");
    scanf("%d %d",&r,&c);
    int arr1[r][c];
    printf("Enter the Elements in an Square Matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter 1 for Insertion, 2 for Deletion, 3 for Linear Search: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            Insert(arr);
            break;
        case 2:
            Delete(arr);
            break;
        case 3:
            Linear(arr);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}

void Insert(int arr[]) {
    int pos, num;
    printf("Enter the position you want to insert number on: ");
    scanf("%d", &pos);
    printf("Enter the number you want to insert: ");
    scanf("%d", &num);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
    n++;

    printf("After insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Delete(int arr[]) {
    int pos;
    printf("Enter the position you want to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("After deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Linear(int arr[]) {
    int target;
    printf("Enter the number you want to search: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (target == arr[i]) {
            printf("Target number %d is found at position %d\n", target, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Target number %d not found in the array\n", target);
    }
}