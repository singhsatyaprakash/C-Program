/*Write a C program that accepts a main string along with a starting position and ending position of a substring to be extracted from the user in the main program. Print the extracted string in the calling program. 
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
void extract(char str[], char substr[],int si,int ei){
    int j=0;
    for(int i=si-1;i<ei;i++){
        substr[j]=str[i];
        j++;
    }
    substr[j]='\0';
    return;
}
int main(){
    int si,ei;
    char str[100],substr[50];
    scanf("%[^\n]s",str);
    scanf("%d",&si);
    scanf("%d",&ei);
    extract(str,substr,si,ei);
    printf("%s",substr);
    return 0;
}














/*Sample Input: 
Main String: A good education transforms an individual into a good citizen
Starting Position: 18 
Ending   Position: 27 
Output: 
Sub-string extracted from the main string: transforms*/
