#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    fprintf(file, "Hello, %s!\n", "World");
    fclose(file);
    return 0;
}
