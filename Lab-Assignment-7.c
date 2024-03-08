//Consider running Bubble and Selection Sorts on the two arrays shown below. Write a c program to compute the number of swaps performed on each value and the total number of swaps performed in the following 2 arrays:
//array1: 97  16  45  63  13  22  7  58  72
//array2: 90  80  70  60  50  40  30  20  10


#include <stdio.h>

// Function to perform bubble sort on an array
int bubbleSort(int arr[], int n) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
    return swaps;
}
// Function to perform selection sort on an array
int selectionSort(int arr[], int n) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
            swaps++;
        }
    }
    return swaps;
}

int main() {
    int arr1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int arr2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int swaps1 = bubbleSort(arr1, n1);
    int swaps2 = selectionSort(arr2, n2);
    printf("array1:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d: %d\n", arr1[i], arr1[i]);
    }
    printf("Total number of swaps: %d\n", swaps1);
    printf("array2:\n");
    for (int i = 0; i < n2; i++) {
        printf("%d: %d\n", arr2[i], arr2[i]);
    }
    printf("Total number of swaps: %d\n", swaps2);
    return 0;
}
