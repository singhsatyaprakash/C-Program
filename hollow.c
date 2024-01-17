#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the numbers of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         
        for(j=1;j<=n+2;j++){
           if(i==1||i==n||j==1||j==n+2)     
              printf("*");
        else  
        printf(" ");
        }
printf("\n");}
    }