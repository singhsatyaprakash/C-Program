/*Develop a C program to compare two strings using a UDF and return 1 if the strings are equal and 0 otherwise without using the built-in function strcmp(). Display an appropriate message to the output screen. 
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
int length(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
int compstr(char s1[],char s2[]){
    int i=0;
    int l1=length(s1);
    int l2=length(s2);
 if(l1==l2){
    while(s1[i]!='\0'){
        if(s1[i]!=s2[i]){
            return 0;
        }
        i++;
    }
    return 1;
 }
 else 
 return 0;
}

int main(){
    char s1[50],s2[50];
    printf("enter string:");
    scanf("%[^\n]s",s1);
    printf("enter string:");
    fflush(stdin);
    scanf("%[^\n]s",s2);
    int res=compstr(s1,s2);  
    if(res==1){
        printf("The string is equal.");
    }  
    else  
     printf("The string is not equal.");
    return 0;
}