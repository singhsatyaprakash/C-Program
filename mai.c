/*print this pattern..
1234567
123 567
12   67
1     7
*/
#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("enter the numbers of rows(one less than the no. of rows you want to print): ");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
     int a=1;
    for(i=1;i<=2*n+1;i++){// first row
        printf("%d",a);
        a++;
    }
    printf("\n");
    for(i=1;i<=n;i++){
       int a=1;
        for(j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        for(k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
         for(j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}
 