/*Develop a C program to find the number of occurrences of each alphabet in a string accepted from the user and display the same to the output screen. Assume that the string contains only alphabets.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
#include<string.h>
void frequency(char str[25]){
        int freq=1;
   for(int i=0;i<strlen(str);i++){
    freq=1;
     for(int j=i+1;j<strlen(str);j++){
        if(str[i]==-1)
            continue;
        else{
            if(str[j]==str[i]){
                freq++;
                str[j]=-1;
            }
        }
     }
     if(str[i]!=-1 && str[i]!=' '){
            printf("%c-%d\n",str[i],freq);
        }
    }
}
int main(){
    char str[25];
    gets(str);
    frequency(str);
    return 0;
}

