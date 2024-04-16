#include <stdlib.h>

int* danglingPointer() {
    int x = 10;
    int* ptr = &x; // Pointer points to a local variable
    return ptr;    // Returning pointer to a local variable
}

int main() {
    int* ptr = danglingPointer();
    // Accessing ptr here will lead to undefined behavior
    return 0;
}
