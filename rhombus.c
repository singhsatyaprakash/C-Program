/*print this pattern...
   ****
  **** 
 ****  
****   
*/
#include<stdio.h>
void main(){
    int i,j,k,l,n;
    printf("enter the numbers of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=4;k++){
            printf("*");
        }
        for(l=1;l<=i-1;l++){
            printf(" ");
        }
        printf("\n");
    }
    }