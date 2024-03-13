#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter a string:");
    gets(str);
    int count=0,i=0;
    char *ptr=&str;
    while(*(ptr+i)!='\0'){
        if(*(ptr+i)>='a'&& *(ptr+i)<='z'|| *(ptr+i)>='A'&&*(ptr+i)<='Z'){
            count++;
        }
        i++;
    }
    printf("Total character=%d",count);
}