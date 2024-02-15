#include<stdio.h>
#include<ctype.h>
#include<string.h>
void SubStr(char s1[],int si,int endi,char sub[]){
    int i=0,j=0;
    for (i=si;i<=endi;i++){
        sub[j]=s1[i];
        j++;
        }
        sub[j]='\0';
}
int main(){
    char s1[25];
    printf("enter string:");
    scanf("%[^\n]s",s1);
    int si,endi;
    printf("enter starting and ending index:");
    scanf("%d %d",&si,&endi);
    char sub[25];
    SubStr(s1,si,endi,sub);
    printf("Substring is:%s",sub);
    return 0;
}