/*A simple encryption scheme is used to interchange letters of the alphabet on a one-to-one basis i.e. ‘A’ is replaced with ‘Z’, ‘B’ with ‘A’, ‘C’ with ‘B’ and so on… ‘Z’ with ‘Y’. Similarly for lowercase letters. Write a C program using this scheme to encode a text as cipher. Ignore any other characters than alphabets. Write another C program that will decrypt (decode) the cipher text back into its original message.
Sample Input:
The two days are never the same. (Original Text)
Cipher text: Sgd svn czxr zqd mdudq sgd rzld.
Decrypted text: The two days are never the same.*/
#include<stdio.h>
void encode(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='A'){
            str[i]+=25;
        }
        else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z')){
            str[i]--;
        }
        i++;
    }
    return;
}
void decode(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='z' || str[i]=='Z'){
            str[i]-=25;
        }
        else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z')){
            str[i]++;
        }
        i++;
    }
    return;
}
int main(){
    char str[25];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    encode(str);
    printf("Cipher text: %s\n", str);
    decode(str);
    printf("Decrypted text: %s\n", str);
    return 0;
}
