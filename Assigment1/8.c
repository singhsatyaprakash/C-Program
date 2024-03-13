/*Design a function convertCase that takes a string as input and returns by converting all the uppercase characters into lowercase and vice-versa. Implement a C program to read the string in the main program and display the modified string to the screen.*/
#include<stdio.h>
void RevCase(char s1[]){
    int i=0;
    while(s1[i]!='\0'){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]+=32;
            i++;
        }
       else if(s1[i]>='a' && s1[i]<='z'){
            s1[i]-=32;
            i++;
        }
        else 
        i++;
}

}
int main(){
    char str[25];
    printf("Enter String:\n");
    scanf("%[^\n]s",str);
    RevCase(str);
    printf("New string: %s",str);

    }