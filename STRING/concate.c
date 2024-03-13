
#include<stdio.h>
#include<string.h>
int length(char str[]){
    int i=0;
    while(str[i]!=0){
        i++;
    }
    return i;
}
void concat(char str1[], char str2[]){
     int l1= length(str1);
    int  l2=length(str2);
    str1[l1]=' ';
    l1++;
    for(int i=0;i<l2;i++){
        str1[l1+i]=str2[i];

    }
    str1[l1+l2]='\0';
     
return;
}
void main(){
    char str1[50],str2[50];
    printf("Enter first string: ");
    scanf("%[^\n]s",str1);
    fflush(stdin);
      printf("Enter second string: ");
    scanf("%[^\n]s",str2);
    concat(str1,str2);
   printf("String is: %s",str1);

}