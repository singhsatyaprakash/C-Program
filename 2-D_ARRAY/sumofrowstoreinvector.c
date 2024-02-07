#include<stdio.h>
void main(){
    int m,n;
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no. of column:");
    scanf("%d",&n);
    int mat[m][n],rvector[m],cvector[n];
    printf("Enter elements:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("matrix:\n");
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    //adding row
        for(int i=0;i<m;i++){
         int rowsum=0;
        for(int j=0;j<n;j++){
        rowsum+=mat[i][j];
        }
        rvector[i]=rowsum;
    }
        printf("SUM OF EACH ROW:");
        for(int i=0;i<m;i++){
            printf("%d ",rvector[i]);
        }
    // adding column
        for(int j=0;j<n;j++){
        int columnsum=0;
        for(int i=0;i<m;i++){
        columnsum+=mat[i][j];
        }
        cvector[j]=columnsum;
    }
            printf("\nSUM OF EACH column:");
        for(int j=0;j<n;j++){
            printf("%d ",cvector[j]);
        }
}