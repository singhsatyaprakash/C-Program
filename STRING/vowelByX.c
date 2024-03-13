
/*
Write a c program to read a sentence from the user and replace all the occurrences of vowels with a x character. Display the modified string to the console.
Name-SATYA PRAKASH SINGH
Roll No:60
Section-B1
Course-B.TECH
Branch-C.S.E 
*/#include<stdio.h>
void main(){
    int i=0;
    char str[100];
    scanf("%[^\n]s",str);
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='u'||str[i]=='o'||str[i]=='i'||str[i]=='e'){
            str[i]='X';
        }
        i++;
    }
    printf("%s",str);
}