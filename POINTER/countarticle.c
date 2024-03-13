/*Write a C program to accept a sentence from the user and find the frequency of occurrence of a, an, the in the accepted sentence and display the same to the output screen.*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int compstr(char s1[],char s2[]){
    int i=0;
    if(strlen(s1)==strlen(s2)){
      while(s1[i]!='\0'){
        if(tolower(s1[i])!=tolower(s2[i])){
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
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    int count_a=0,count_an=0,count_the=0;
    //converting string into 2-D array.
    int i=0,j=0,k=0;
    char wstr[25][100];
    while(str[i]!='\0'){
        if(str[i]!=' '){
            wstr[j][k]=str[i];
            k++;
        }
        else if(k>0){
            wstr[j][k]='\0';
            j++;
            k=0;
        }
        i++;
    }
    if(k>0){
        wstr[j][k]='\0';
        j++;
    }
    //counting article
    char a[5]="a";
    char an[5]="an";
    char the[5]="the";
    for(i=0;i<j;i++){
        if(compstr(wstr[i],an)){
            count_an++;
        }
        else if(compstr(wstr[i],a)){
            count_a++;
        }
        else if(compstr(wstr[i],the)){
            count_the++;
        }
    }
    printf("No. of article (a)=%d\nNo. of article (an)=%d\nNo. of article (the)=%d",count_a,count_an,count_the);
    return 0;
}