#include<stdio.h>
#include<string.h>
int Mylen(char s[]){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
void merge(char s1[],char s2[],char s3[]){
    int i=0;
    for(i=0;i<Mylen(s1);i++){
        s3[i]=s1[i];
    }
    for( i=0;i<Mylen(s2);i++){
        s3[i+Mylen(s1)]=s2[i];
    }
    s3[Mylen(s1)+Mylen(s2)]='\0';
}
int main(){
    char s1[25],s2[25];
    char s3[50];
    printf("enter string:");
    scanf("%[^\n]*c",s1);
    // getchar();
    fflush(stdin);
    printf("enter string:");
    scanf("%[^\n]*c",s2);
    merge(s1,s2,s3);
    printf("merged string is:%s",s3);
return 0;
}