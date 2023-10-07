#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void bubbleSort(int arr[], int n) {
    int temp, swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
        printf("Pass %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

void selectionSort(int arr[], int n) {
    int minIndex, temp;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        printf("Pass %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

void insertionSort(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        printf("Pass %d: ", i);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int sortedArr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int choice;

    do {
        printf("\n1. Bubble Sort\n");
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
                printf("\nTime taken: %lf seconds\n", ((double)(end_bubble - start_bubble)) / CLOCKS_PER_SEC);
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    sortedArr[i] = arr[i];
                }
                clock_t start_selection = clock();
                selectionSort(sortedArr, n);
                clock_t end_selection = clock();
                printf("\nTime taken: %lf seconds\n", ((double)(end_selection - start_selection)) / CLOCKS_PER_SEC);
                break;
            case 3:
                for (int i = 0; i < n; i++) {
                    sortedArr[i] = arr[i];
                }
                clock_t start_insertion = clock();
                insertionSort(sortedArr, n);
                clock_t end_insertion = clock();
                printf("\nTime taken: %lf seconds\n", ((double)(end_insertion - start_insertion)) / CLOCKS_PER_SEC);
                break;
            case 4:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    printf("Final sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}