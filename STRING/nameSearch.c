#include<stdio.h>
#include<string.h>
#include<ctype.h>
int comstr(char s1[],char s2[]){
    int i=0;
    if(strlen(s1)==strlen(s2)){
        while(s1[i]!='\0'){
            if(tolower(s1[i])!=tolower(s2[i])){
                return 0;}
                i++;
            }
            return 1;
        }
        else
        return 0;
    }
int main(){
    int n;
    printf("Enter the no. of names:");
    scanf("%d",&n);
    char names[n][25];
    for(int i=0;i<n;i++){
        scanf("%[^\n]s",names[i]);
    }
    // name to be search
    char sname[25];
    printf("Enter the name to search:");
    scanf("%[^\n]s",sname);
    for(int i=0;i<n;i++){
        if(comstr(names[i],sname)){
            printf("%s name found",sname);
            break;
        }
    }
    return 0;
}
