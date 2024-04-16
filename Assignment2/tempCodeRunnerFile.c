/*Design a C program to read N names of members of a club from the user. Display the longest name (including space) using pointers to the console.*/
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("How many members:");
    scanf("%d",&n);
    char names[n][100];
    printf("Enter names of members:\n");
    for(int i=0;i<n;i++){
        fflush(stdin);
        scanf("%[^\n]s",names[i]);
    }
    int max=strlen(names[0]);
    int max_idx;
    printf("%d\n",max);
    for(int i=0;i<n;i++){
        if(max<strlen(names[i])){
            max=strlen(names[i]);
            max_idx=i;
        }
    }
    printf("Longest name out of list of members:\n%s",names[max_idx]);
    return 0;
}