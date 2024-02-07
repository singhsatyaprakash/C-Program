#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the numbers of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        char ch='A';
              int a=1;
        for(j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d",a++);
            }
            else{
            printf("%c",ch++);}
        }
   printf("\n"); }
}