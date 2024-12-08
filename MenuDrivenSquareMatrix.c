#include<stdio.h>

void Traverse(int arr[10][10], int r, int c);
void upperTr(int arr[10][10], int r, int c);
void D(int arr[10][10], int r, int c);
void count(int arr[10][10], int r, int c);

int main() {
    int r, c;
    int choice;

    printf("Enter the number of rows and columns (this should be equal for a square matrix):\n");
    scanf("%d %d", &r, &c);

    if (r != c) { 
        printf("Error: Number of rows and columns must be equal for a square matrix.\n");
        return 1;
    }

    int arr[10][10];  // Fixed-size array declaration.

    printf("Enter the elements in the square matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    while (1) { // Infinite loop to keep the menu running
        printf("\nMenu:\n");
        printf("1. Display the matrix\n");
        printf("2. Display upper triangular matrix\n");
        printf("3. Display elements just above and below the diagonal of the matrix\n");
        printf("4. Count the total number of non-zero elements\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Traverse(arr, r, c);
                break;
            case 2:
                upperTr(arr, r, c);
                break;
            case 3:
                D(arr, r, c);
                break;
            case 4:
                count(arr, r, c);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                continue; // Continue to re-display the menu after an invalid choice
        }
    }

    return 0;
}

void Traverse(int arr[10][10], int r, int c) {
    printf("Displaying the elements in the square matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void upperTr(int arr[10][10], int r, int c) {
    printf("Displaying the upper triangular matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i <= j) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void D(int arr[10][10], int r, int c) {
    printf("Displaying elements just above and below the diagonal elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j - 1 || i == j + 1) {  // Corrected to display just above and below diagonal elements
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void count(int arr[10][10], int r, int c) {
    int count = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] != 0) {
                count++;
            }
        }
    }
    printf("The total number of non-zero elements is: %d\n", count);
}