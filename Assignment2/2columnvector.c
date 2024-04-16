#include<stdio.h>
int main(){
    int n,m,sum=0;
    printf("Enter the order of first matrix(nxm): ");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    int vector[m];
    
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<n;i++){
         *(vector+i)=0;
        for(int j=0;j<m;j++){ 
           *(vector+i)+=*(*(arr+j)+i);
        }
    }
        printf("\n");
        printf("the sum of columns is: ");
    for(int i=0;i<n;i++){
       printf("%d ",*(vector+i));
    }
     return 0;
}