/*Design a UDF that takes a single string and a character present in the string as its argument, then it returns an index to the first occurrence of the character to the string. Write a C program to read a sentence in the main program and display the string from the index returned by the UDF using a pointer to the console.*/
#include<stdio.h>
int display(char str[],char ch){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==ch){
            return i;
        }
        i++;
    }
    return 0;
}
int main(){
    char str[100];
    printf("Enter sentence:");
    scanf("%[^\n]s",str);
    char ch;
    printf("Enter character:");
    fflush(stdin);
    scanf("%c",&ch);
    int idx=display(str,ch);
    if(idx==0){
        printf("Enter character is not in the sentence.");
    }
    else{
    printf("index:%d\n",idx);
    char*ptr=&str[idx];
    printf("%s",ptr);
    }
    return 0;
}