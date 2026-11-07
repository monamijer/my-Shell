#include <stdio.h>

// Utility function to swap two elements
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes the last element as the pivot, places
   the pivot element at its correct position in the sorted array, 
   and places all smaller elements to the left and greater to the right */
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = (low - 1);    // Index of the smaller element

    for (int j = low; j < high; j++) {
        // If the current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // Increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    // Swap the pivot element with the element at i + 1
    swap(&arr[i + 1], &arr[high]);
    return (i + 1); // Return the partitioning index
}

// The main function that implements QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi is the partitioning index, arr[pi] is now at the right place
        int pi = partition(arr, low, high);

        // Separately sort elements before and after the partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}

