#include<stdio.h>
#include<ctype.h>
void main(){
    char str[100];
    printf("Enter string:");
    scanf("%[^\n]s",str);
    char vowel[100];
    char consonants[100];
    int i=0;
    int vol=0;
    int con=0;
    while(str[i]!='\0'){
        if(tolower(str[i])=='a'||tolower(str[i])=='e'||tolower(str[i])=='i'||tolower(str[i])=='o'||tolower(str[i])=='u'){
            vowel[vol]=str[i];
            vol++;
        }
        else if(tolower(str[i])>='a'&&tolower(str[i])<='z'&& !(tolower(str[i])=='a'||tolower(str[i])=='e'||tolower(str[i])=='i'||tolower(str[i])=='o'||tolower(str[i])=='u')){
            consonants[con]=str[i];
            con++;
        }
        i++;
    }
    printf("Vowels in string:\n");
    for(int i=0;i<vol;i++){
        printf("%c ",vowel[i]);
    }
    printf("\nConsonants in string:\n");
    for(int i=0;i<con;i++){
        printf("%c ",consonants[i]);
    }
}