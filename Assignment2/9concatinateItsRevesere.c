/*Draw a flowchart and design a UDF using a pointer that returns two concatenated strings such that original string is joined with its reversed version. Implement a C program to read a string from the user and display the concatenated string to the console.
Sample Input:
Grummble
Output:
GrummbleelbmmurG  */
#include<stdio.h>
#include<string.h>
void copystring(char str[],char cstr[]){
    int i=0;
    char *ptr=str;
    char *cptr=cstr;
    while(*(ptr+i)!='\0'){
        *(cptr+i)=*(ptr+i);
        i++;
    }
    *(cptr+i)='\0';
}
void reverse(char cstr[]){
    int i=0,j=strlen(cstr)-1;
    char *ptr=cstr;
    while(i<j){
        char temp=*(ptr+j);
        *(ptr+j)=*(ptr+i);
        *(ptr+i)=temp;
        i++;
        j--;
    }
}
void concatenate(char str[],char cstr[]){
    int i=0;
    char *ptr=str;
    char *cptr=cstr;
    while(*(ptr+i)!='\0'){
        i++;
    }
    // *(ptr+i)=' ';
    // i++;
    int j=0;
    while(*(cptr+j)!='\0'){
        *(ptr+i)=*(cptr+j);
        i++;
        j++;
    }
    *(ptr+i)='\0';
}
int main(){
    char str[100];
    printf("Enter string:");
    gets(str);
    char cstr[100];
    copystring(str,cstr);
    // printf("New string:%s\n",cstr);
    reverse(cstr);
    // printf("New string:%s\n",cstr);
    concatenate(str,cstr);
    printf("New string:%s\n",str);
}
