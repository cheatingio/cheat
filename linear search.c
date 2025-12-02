#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    // Iterate through each element of the array
    for (int i = 0; i < size; i++) {
        // If the current element matches the key, return its index
        if (arr[i] == key) {
            return i;
        }
    }
    // If the key is not found in the array, return -1
    return -1;
}

int main() {
    int arr[] = {10, 25, 35, 45, 50, 60}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int key; // Element to search for

    printf("Enter the element to search: ");
    scanf("%d", &key); // Get the key from user input

    int result = linearSearch(arr, size, key); // Call the linear search function

    // Print the result based on the return value of linearSearch
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
