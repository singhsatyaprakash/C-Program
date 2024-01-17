/*print this pattern...
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("enter the numbers of rows(odd): ");
    scanf("%d",&n);
    int nsp=n/2;// no. of space
    int nst=1;//no. of star
    int ml=n/2+1;//middle line no.
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){// spaces
                printf(" ");
        }
        for(k=1;k<=nst;k++){//stars
                printf("*");
        }
       
        if(i<ml){
            nsp--;
            nst+=2;}
        
            else
            { nsp++;
            nst-=2;}
         printf("\n");
    }
    }