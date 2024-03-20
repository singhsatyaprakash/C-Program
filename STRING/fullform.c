#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int j = 0;
    char a[100];
    printf("ENTER A STRING - ");
    scanf("%[^\n]s", a);
    for (j = strlen(a) - 1;; j--)
    {
        if (a[j] == ' ' && a[j - 1] != ' ')
            break;
    }
    for (int i = 0; i < j; i++)
    {
        if (a[i] != ' ')
        {
            printf("%c.", toupper(a[i]));
            for (i; a[i] != ' '; i++)
                ;
        }
    }
    for (int i = j; i < strlen(a); i++)
    {
            printf("%c", a[i]);
    }
}