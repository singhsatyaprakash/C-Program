/*Read N strings from the user & then display only the palindromes contained in it to the screen. Design a UDF to find whether a string passed to it is palindrome or not. Implement the UDF using pointers.*/
#include<stdio.h>
#include<string.h>
int ispal(char *str){
int i=0;
int j=strlen(str)-1;
while(i<j){
    if(*(str+i)!=*(str+j)){
        return 0;
    }
    i++;
    j--;
}
return 1;
}
int main(){
    int n;
    printf("How many strings:");
    scanf("%d",&n);
    char str[n][25];
    printf("Enter strings:\n");
    for(int i=0;i<n;i++){
        fflush(stdin);
        scanf("%[^\n]s",str[i]);
    }
    printf("string which palindrome in it are:\n");
    for(int i=0;i<n;i++){
        if(ispal(str[i])){
            fflush(stdout);
            printf("%s\n",str[i]);
        }
    }
}