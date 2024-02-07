#include <stdio.h>

int main() {
    // Compile-time initialization of 2-D array
    int twoDArray[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Accessing and printing elements
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", twoDArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}