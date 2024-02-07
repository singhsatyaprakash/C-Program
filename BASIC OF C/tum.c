/*print this pattern..
ABCDEFG
ABC EFG
AB   FG
A     G
*/
#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("enter the numbers of rows(one less than the no. of rows you want to print): ");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
     char ch='A';
    for(i=1;i<=2*n+1;i++){// first row
        printf("%c",ch);
        ch++;
    }
    printf("\n");
    for(i=1;i<=n;i++){
        char ch='A';
        for(j=1;j<=nst;j++){
            printf("%c",ch);
            ch++;
        }
        for(k=1;k<=nsp;k++){
            printf(" ");
            ch++;
        }
         for(j=1;j<=nst;j++){
            printf("%c",ch);
            ch++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}
 