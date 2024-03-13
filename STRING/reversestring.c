/*Write a C program to accept the string from the user and then reverse string without using the second string.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    int i=0;
    int j=strlen(str)-1;
    while(i<=j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("Reversed string is:%s",str);
    return 0;
}