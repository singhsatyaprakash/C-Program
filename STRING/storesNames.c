#include<stdio.h>
void main(){
    int n;
    printf("How many names:");
    scanf("%d",&n);
    char names[n][25];
    for(int i=0;i<n;i++){
        fflush(stdin);
        scanf("%[^\n]s",names);
    }
    printf("%s",names[1][25]);
}