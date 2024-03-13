/*Draw a flowchart & develop a C program to read a sentence from the keyboard and transfer the sentence by filtering all the occurrence of articles such as ‘a’ ‘an’ and ‘the’ into another string. Display the modified sentence stored in the new array to the console.
Sample Input/Output
Input:
Main String: An apple a day keeps the doctor away.
Output:
apple day keeps doctor away.*/
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
    char a[5]="a";
    char an[5]="an";
    char the[5]="the";
    
    return 0;
}