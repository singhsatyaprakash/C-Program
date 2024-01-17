 #include<stdio.h>
 void main(){
    int i,j,l,k,n;
    printf("Enter the no. of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            printf("*");
        }for(k=1;k<=i-1;k++){
            printf(" ");
        }
        for(l=1;l<=n-i;l++){
            printf("*");
        }
        printf("\n");
    }
 }