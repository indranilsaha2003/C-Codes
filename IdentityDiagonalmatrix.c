#include <stdio.h>
#include <stdbool.h>

// Function to check if the matrix is an identity matrix
bool isIdentityMatrix(int mat[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && mat[i][j] != 1) {
                return false;
            } else if (i != j && mat[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

// Function to check if the matrix is a diagonal matrix
bool isDiagonalMatrix(int mat[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && mat[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[100][100];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isIdentityMatrix(matrix, n)) {
        printf("The given matrix is an Identity Matrix.\n");
    } else if (isDiagonalMatrix(matrix, n)) {
        printf("The given matrix is a Diagonal Matrix.\n");
    } else {
        printf("The given matrix is neither an Identity Matrix nor a Diagonal Matrix.\n");
    }

    return 0;
}
