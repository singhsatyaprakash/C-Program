#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("abc.txt", "w+");
    char ch, str[100];

    printf("Enter string: ");
    scanf("%[^\n]", str);

    if (fp != NULL) {
        fputs(str, fp);
        fclose(fp);

        fp = fopen("abc.txt", "r+");

while ((ch = fgetc(fp)) != EOF) {
    if (isspace(ch) != 0) {
        fseek(fp, -1L, SEEK_CUR); // Move back one position
        fputc('$', fp);           // Replace space with '$'
        fseek(fp, 0L, SEEK_CUR);  // Move forward one position
    }
}


        rewind(fp);

        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }

        fclose(fp);
    }
    
    return 0;
}
