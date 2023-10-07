#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to allocate memory for a matrix of size rows x cols
int** allocateMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to free memory allocated for the matrix
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to initialize the matrix with random values from 0 to 9
void initializeMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 10; // Limiting values from 0 to 9
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int** matrixOne, int** matrixTwo, int** resultMatrix, int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                resultMatrix[i][j] += matrixOne[i][k] * matrixTwo[k][j];
            }
        }
    } 
}

// Function to display the matrix
void displayMatrix(int** matrix, int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for matrixOne: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns for matrixTwo: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible! Columns of matrixOne must be equal to rows of matrixTwo.\n");
        return 1;
    }

    // Allocate memory for matrices
    int** matrixOne = allocateMatrix(rows1, cols1);
    int** matrixTwo = allocateMatrix(rows2, cols2);
    int** resultMatrix = allocateMatrix(rows1, cols2);

    // Initialize matrices with random values
    srand(time(NULL));

    initializeMatrix(matrixOne, rows1, cols1);
    initializeMatrix(matrixTwo, rows2, cols2);

    // Display matrices
    printf("Matrix One:\n");
    displayMatrix(matrixOne, rows1, cols1);

    printf("Matrix Two:\n");
    displayMatrix(matrixTwo, rows2, cols2);

    // Perform matrix multiplication calculating time
    clock_t start_time = clock();
    multiplyMatrices(matrixOne, matrixTwo, resultMatrix, rows1, cols1, cols2);
    clock_t end_time = clock();
    double execution_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Display the result matrix
    printf("Result Matrix:\n");
    displayMatrix(resultMatrix, rows1, cols2);

    printf("\nMatrix multiplication completed in %.2f seconds.\n", execution_time);

    // Free the allocated memory
    freeMatrix(matrixOne, rows1);
    freeMatrix(matrixTwo, rows2);
    freeMatrix(resultMatrix, rows1);

    return 0;
}