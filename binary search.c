#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate middle index

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Element found, return its index
        }
        // If target is greater, ignore left half
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    // If we reach here, then element was not present
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int target = 23; // Element to search for

    int result = binarySearch(arr, size, target);

    if (result == -1) {
        printf("Element %d is not present in the array.\n", target);
    } else {
        printf("Element %d is present at index %d.\n", target, result);
    }

    // Example of a target not found
    target = 100;
    result = binarySearch(arr, size, target);
    if (result == -1) {
        printf("Element %d is not present in the array.\n", target);
    } else {
        printf("Element %d is present at index %d.\n", target, result);
    }

    return 0;
}
