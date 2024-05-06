#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp = fopen("read1.txt", "r");
    int count = 0, n, ch;

    printf("Enter which position of line to replace: ");
    scanf("%d", &n);

    char str[1000];
    printf("Enter the new line: ");
    getchar(); // Clear the newline character left in the input buffer
    fgets(str, sizeof(str), stdin);

    FILE *ptr = fopen("line1.txt", "w+");
    if (fp != NULL && ptr != NULL) {
        int newline_count = 0;
        while ((ch = fgetc(fp)) != EOF) {
            fputc(ch, ptr);
            if (ch == '\n') {
                newline_count++;
                if (newline_count == n) {
                    fputs(str, ptr);
                }
            }
        }
    } else {
        printf("Error opening files.\n");
        return 1;
    }

    fclose(fp);
    fclose(ptr);

    remove("read1.txt");
    rename("line1.txt", "read1.txt");

    printf("Line replaced successfully.\n");

    return 0;
}
