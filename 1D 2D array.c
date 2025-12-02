#include <stdio.h>

int main() {
    // --- 1D Array Operations ---
    printf("--- 1D Array Operations ---\n");

    // Declaration and Initialization of a 1D array
    int oneDArray[5] = {10, 20, 30, 40, 50};

    // Accessing and Printing elements of a 1D array
    printf("Elements of 1D Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", oneDArray[i]);
    }
    printf("\n");

    // Modifying an element in a 1D array
    oneDArray[2] = 35;
    printf("1D Array after modification: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", oneDArray[i]);
    }
    printf("\n");

    // Calculating the sum of elements in a 1D array
    int sum1D = 0;
    for (int i = 0; i < 5; i++) {
        sum1D += oneDArray[i];
    }
    printf("Sum of elements in 1D Array: %d\n\n", sum1D);

    // --- 2D Array Operations ---
    printf("--- 2D Array Operations ---\n");

    // Declaration and Initialization of a 2D array (matrix)
    int twoDArray[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing and Printing elements of a 2D array
    printf("Elements of 2D Array:\n");
    for (int i = 0; i < 3; i++) { // Iterate through rows
        for (int j = 0; j < 3; j++) { // Iterate through columns
            printf("%d ", twoDArray[i][j]);
        }
        printf("\n"); // New line after each row
    }

    // Modifying an element in a 2D array
    twoDArray[1][1] = 55;
    printf("2D Array after modification:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", twoDArray[i][j]);
        }
        printf("\n");
    }

    // Calculating the sum of all elements in a 2D array
    int sum2D = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum2D += twoDArray[i][j];
        }
    }
    printf("Sum of elements in 2D Array: %d\n", sum2D);

    return 0;
}
