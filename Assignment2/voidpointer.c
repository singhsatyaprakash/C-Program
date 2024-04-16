#include <stdio.h>

int main() {
    int x = 10;
    void* ptr = &x; // Void pointer pointing to an int
    printf("%d", *(int*)ptr); // Typecasting and dereferencing
    return 0;
}
//we have to typecast the void pointer at time of printing..

