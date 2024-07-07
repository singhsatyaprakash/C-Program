#include<stdio.h>
#include<ctype.h>
int main(){
    char str[500];
    char ch;
    int cvol=0,ccon=0,cdig=0,cspe=0;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    int i=0;
    while(str[i]!='\0'){
        ch=str[i];
        if((tolower(ch))>='a'&&(tolower(ch))<='z'){
            if((tolower(ch))=='a'||(tolower(ch))=='e'||(tolower(ch))=='i'||(tolower(ch))=='o'||(tolower(ch))=='u'){
                cvol++;
            }
            else
            ccon++;
        }
        else if(ch>='0'&&ch<='9'){
            cdig++;
        }
        else{
            cspe++;
        }
        i++;
    }
        printf("%d %d %d %d",cvol,ccon,cdig,cspe);
        return 0;
}