/*Design a UDF that takes a string and returns a pointer to a memory location by copying all the vowels dynamically to it. Implement a C program for the same and display all the vowels by reading from the memory using a pointer to the console.*/
#include<stdio.h>
#include<stdlib.h>
char *returnptr(){
    char str[100];
    printf("Enter string:");
    scanf("%[^\n]s",str);
    char *ptr=(char*)malloc(100*sizeof(char));


    return ptr;
}
int main(){
    return 0;
}