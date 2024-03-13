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