#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter the number of rows in first matrix:"); 
    scanf("%d", &r1);
     printf("Enter the number of columns in first matrix:"); 
    scanf("%d", &c1);
    printf("Enter the number of rows in second matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns in second matrix: ");
    scanf("%d", &c2);
    if (c1 != r2) {
        printf("Error: The number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
        return 1;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiplying matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}