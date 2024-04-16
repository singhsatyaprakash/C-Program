#include<stdio.h>
void uppertriangle(int m,int n,int arr[m][n]){
    printf("Upper triangular matrix:\n");
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
            printf("%d ",arr[i][j]);
            }
            else 
            printf("  ");
        }
        printf("\n");
    }
}
void lowertriangle(int m,int n,int arr[m][n]){
        printf("Lower triangular matrix:\n");
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
            printf("%d ",arr[i][j]);
            }
            else 
            printf("  ");
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    printf("Enter rows and columns:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter the elements:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    uppertriangle(m,n,arr);
    lowertriangle(m,n,arr);
    return 0;
}