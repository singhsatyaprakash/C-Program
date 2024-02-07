/*print this pattern
   1
  121
 12321
1234321
*/
#include<stdio.h>
void main(){
    int i,j,k,l,n;
    printf("enter the numbers of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){// numbers of rows...
        for(j=1;j<=n-i;j++){//space
            printf(" ");
        }
        int a=1;
        for(k=1;k<=i;k++){
            printf("%d",a++);
            }
              int b;
                b=i-1;
            for(l=1;l<=i-1;l++){
                printf("%d",b--);
            }
            printf("\n");
        }
    
    }