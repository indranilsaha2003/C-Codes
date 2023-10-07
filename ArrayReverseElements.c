#include <stdio.h>

// Function to reverse the elements of the array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];
        arr[start] = arr[start] - arr[end];

        // Move towards the middle of the array
        start++;
        end--;
    }
}

// Function to display the array elements
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    displayArray(arr, size);

    reverseArray(arr, size);

    printf("Reversed array: ");
    displayArray(arr, size);

    return 0;
}
