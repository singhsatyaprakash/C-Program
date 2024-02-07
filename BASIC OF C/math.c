/*print this pattern...
   1
  123
 12345
1234567
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
        int a=1;
        for(k=1;k<=2*i-1;k++){
            printf("%d",a++);
        }
        printf("\n");
    }
}