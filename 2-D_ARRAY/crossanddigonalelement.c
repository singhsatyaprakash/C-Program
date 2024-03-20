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
    int pal[m];
    int cross[m];
    for(int i=0;i<m;i++){
        pal[i]=arr[i][i];
        cross[i]=arr[i][n-1-i];
        }
    for(int i=0;i<m;i++){
        printf("%d ",pal[i]);
    }
    printf("\n");
    for(int i=0;i<m;i++){
        printf("%d ",cross[i]);
    }   
}