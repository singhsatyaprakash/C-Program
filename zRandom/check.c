#include <stdio.h>

int main() {
    int rows = 3;
    int cols = 4;

    // Declare and initialize a 2D array
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Using double pointers to access elements in the 2D array
    int (*ptr)[cols] = arr;

    // Traverse the 2D array using pointers
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", **((ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}