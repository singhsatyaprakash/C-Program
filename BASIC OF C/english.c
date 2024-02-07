/*print this pattern...
   A
  ABC
 ABCDE
ABCDEFG
*/
#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("enter the n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        char ch='A';
        for(k=1;k<=2*i-1;k++){
            printf("%c",ch++);
        }
        printf("\n");
    }
}