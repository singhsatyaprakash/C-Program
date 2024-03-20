#include<stdio.h>
void main(){
    int m,n;
    printf("Enter m and n:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j||i+j==n-1){
                arr[i][j]=0;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}