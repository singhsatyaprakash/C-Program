#include <stdio.h>

int main() {
    int* ptr; // Wild pointer
    *ptr = 10; // Dereferencing a wild pointer
    printf("%d", *ptr); // This may cause a segmentation fault
    return 0;
}
