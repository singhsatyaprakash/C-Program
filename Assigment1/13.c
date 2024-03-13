/*Design a UDF in C that returns 1 if the strings passed to it is a Anagram otherwise zero. Implement a C program to read two strings from the user and display if it’s an Anagram or not by calling the UDF. Display appropriate message. Ignore the case.
(An anagram of a string is another string that is formed by the rearrangement of the same set of characters. For example, “abcd” and “dabc” are anagrams of each other.)
Sample Input:
String 1: Listen
String 2: Silent
Sample Output: The two strings are anagrams of each other.*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int IsAnagram(char str[],char ana[]){
if(strlen(str)!=strlen(ana)){
    return 0;
}
for(int i=0;str[i]!='\0';i++){
    for(int j=0;ana[j]!='\0';j++){
        if(tolower(str[i])==tolower(ana[j])){
        ana[j]=-1;
        break;
        }
    }
}
for(int i=0;ana[i]!='\0';i++){
    if(ana[i]!=-1){
        return 0;
    }
}
return 1;
}
int main(){
    char str[25],ana[25];
    printf("String 1:");
    scanf("%[^\n]s",str);
    printf("String 2:");
    fflush(stdin);
    scanf("%[^\n]s",ana);
    if(IsAnagram(str,ana)){
        printf("The two strings are anagrams of each other");
    }
    else
        printf("The two strings are not anagrams of each other");
    return 0;
}