#include<stdio.h>
void separate(int even[],int odd[],int* m, int *n,int N){
    while(N>0){
         int d=N%10;
        if(d%2==0){
           even[*m]=d;
           *m+=1; 
        }
        else{
            odd[*n]=d;
            *n+=1;
        }
        N/=10;
    }
}
void main(){
    int N,m=0,n=0;
    printf("Enter any number: ");
    scanf("%d",&N);
    int even[25],odd[25];
    separate(even,odd,&m,&n,N);
    for(int i=0;i<m;i++){
        printf("%d ",even[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",odd[i]);
    }
}