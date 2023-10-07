#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1 - i; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted array using Bubble Sort:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
               
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
     printf("\nSorted array using Selection Sort:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
}

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
     printf("\nSorted array using Insertion Sort:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ",arr[i]);
                }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int sortedArr[n];  // To store the sorted array
    srand(time(NULL));

    // Input array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        arr[i]=rand()%10;
    }

    printf("The elements are :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    
    int choice;
    do{
        printf("\nSorting Menu:\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            for (int i = 0; i < n; i++) {
                    sortedArr[i] = arr[i];
                }
                clock_t start_bubble = clock();
                bubbleSort(sortedArr, n);
                clock_t end_bubble = clock();
                 printf("\nTime taken: %f seconds\n", ((double)(end_bubble - start_bubble)) / CLOCKS_PER_SEC);
                break;
            case 2:
            for (int i = 0; i < n; i++) {
                    sortedArr[i] = arr[i];
                }
                clock_t start_selection = clock();
                selectionSort(sortedArr, n);
                clock_t end_selection = clock();
                printf("\nTime taken: %f seconds\n", ((double)(end_selection - start_selection)) / CLOCKS_PER_SEC);
                break;
            case 3:
            for (int i = 0; i < n; i++) {
                    sortedArr[i] = arr[i];
                }
                clock_t start_insertion = clock();
                insertionSort(sortedArr, n);
                clock_t end_insertion = clock();
                printf("\nTime taken: %f seconds\n", ((double)(end_insertion - start_insertion)) / CLOCKS_PER_SEC);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Enter a valid choice.\n");
        }
       } while(choice!=4);


    // Print the original array one last time
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}