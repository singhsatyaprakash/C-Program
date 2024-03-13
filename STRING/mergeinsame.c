#include<stdio.h>
#include<string.h>
int Mylen(char s[]){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
void merge(char s1[],char s2[]){
    int i=0;
 
    for( i=0;i<Mylen(s2);i++){
        s1[Mylen(s1)+i]=s2[i];
    }
    s1[Mylen(s1)+Mylen(s2)]='\0';
}
int main(){
    char s1[25],s2[25];
    printf("enter string:");
    scanf("%[^\n]*c",s1);
getchar();
    printf("enter string:");
    scanf("%[^\n]*c",s2);
   s1[Mylen(s1)+Mylen(s2)];
    merge(s1,s2);
    printf("merged string is:%s",s1);
return 0;
}

