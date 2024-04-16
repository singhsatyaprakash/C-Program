// #include <stdio.h>
// #include <stdlib.h>

// int* createInteger(int value) {
//     int *ptr = (int *)malloc(sizeof(int)); // Allocate memory for an integer
//     if (ptr == NULL) {
//         printf("Memory allocation failed!\n");
//         exit(EXIT_FAILURE);
//     }
//     *ptr = value; // Assign the value to the allocated memory
//     return ptr; // Return the pointer to the allocated memory
// }

// int main() {
//     int *numPtr = createInteger(42); // Call the function to create an integer and get its pointer
//     printf("The value at the pointer: %d\n", *numPtr); // Dereference the pointer to access the value
//     free(numPtr); // Free the allocated memory
//     return 0;
// }
#include <stdio.h>

int* createInteger(int value) {
    int num = value; // Local variable
    return &num; // Return the address of the local variable
}

int main() {
    int *numPtr = createInteger(42); // Call the function to get the pointer to a local variable
    printf("The value at the pointer: %d\n", *numPtr); // Dereference the pointer to access the value
    // WARNING: Accessing *numPtr beyond this point leads to undefined behavior
    return 0;
}

