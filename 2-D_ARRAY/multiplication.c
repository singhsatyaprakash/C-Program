#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter no. of row(Ist matrix):");
    scanf("%d",&m);
    printf("Enter no. of column(Ist matrix):");
    scanf("%d",&n);
    printf("Enter no. of row(IInd matrix):");
    scanf("%d",&p);
    printf("Enter no. of column(IInd matrix):");
    scanf("%d",&q);
    int arr[m][n];
    int brr[p][q];
    int res[m][q];
    printf("enter elements of first matrix:\n");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
    }
    printf("enter elements of second matrix:\n");
    for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        scanf("%d",&brr[i][j]);
    }
    }
    if(n!=p){
        printf("Matrix multiplication not possible.");
    }
    else{
    for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        res[i][j]=0;
        for(int k=0;k<n;k++){
            res[i][j]+=arr[i][k]*brr[k][j];
        }
    }
    }
    }
        for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        printf("%d   ",res[i][j]);}
        printf("\n");
}
return 0;
}