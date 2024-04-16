#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory dynamically
    ptr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        // ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }

    // Free dynamically allocated memory
    free(ptr);
    return 0;
}
