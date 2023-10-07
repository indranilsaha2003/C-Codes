#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to allocate memory for a matrix
int** createMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i)
        matrix[i] = (int*)malloc(cols * sizeof(int));
    return matrix;
}

// Function to release memory of a matrix
void deleteMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i)
        free(matrix[i]);
    free(matrix);
}

// Function to initialize the matrix with random values from 0 to 9
// void initializeMatrix(int** matrix, int rows, int cols) {
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             matrix[i][j] = rand() % 10;
//         }
//     }
// }

// Function to print a matrix
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices and store the result in another matrix
void matrixMultiplication(int** matrixOne, int** matrixTwo, int** resultMatrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < cols; ++k) {
                resultMatrix[i][j] += matrixOne[i][k] * matrixTwo[k][j];
            }
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for matrices
    int** matrixOne = createMatrix(rows, cols);
    int** matrixTwo = createMatrix(rows, cols);
    int** resultMatrix = createMatrix(rows, cols);

    // Seed the random number generator
    // srand(time(NULL));

    // Initialize matrixOne and matrixTwo with random values from 0 to 9
    // initializeMatrix(matrixOne, rows, cols);
    // initializeMatrix(matrixTwo, rows, cols);

    printf("Matrix One:\n");
    printMatrix(matrixOne, rows, cols);

    printf("\nMatrix Two:\n");
    printMatrix(matrixTwo, rows, cols);

    // Perform matrix multiplication and measure execution time
    clock_t start_time = clock();
    matrixMultiplication(matrixOne, matrixTwo, resultMatrix, rows, cols);
    clock_t end_time = clock();
    double execution_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("\nResult Matrix (Matrix One * Matrix Two):\n");
    printMatrix(resultMatrix, rows, cols);

    printf("\nMatrix multiplication completed in %.2f seconds.\n", execution_time);

    // Free memory for matrices
    deleteMatrix(matrixOne, rows);
    deleteMatrix(matrixTwo, rows);
    deleteMatrix(resultMatrix, rows);

    return 0;
}
