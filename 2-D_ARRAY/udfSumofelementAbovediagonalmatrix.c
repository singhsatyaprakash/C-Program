#include<stdio.h>
int uppersum(int m,int n,int arr[][n]){
    int i,j;
    int sum=0;
        for(int i=0;i<m;i++){
        for(int j=0;i<n;j++){
    
            if(i<j){
                sum+=arr[i][j];
            }
        }
            } 
            return sum;
    
}
void main(){
    int m,n,sum=0;
    printf("Enter no. of row:");
    scanf("%d",&m);
    printf("Enter no. of column:");
    scanf("%d",&n);
    //Reading array
    printf("enter the elements:\n");
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;i<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    sum=uppersum(m,n,arr);
    printf("%d",sum);
}
