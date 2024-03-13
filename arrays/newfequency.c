#include<stdio.h>
void main(){
    int n;
    printf("enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter element:\n");
    for(int i=0;i<n;i++){
    scanf("%d",arr[i]);
    }
    int visted[n]={0};
    int frequency[n];
    for(int i=0;i<n;i++){
        frequency[i]=1;
    }
    //removing duplicate
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]&&visited[j]==0&&visited[i]==0){
                frequency[i]=frequency[i]+1;//counting dulplicate
                visited[i]=1;
                visited[j]=1;
            }
        }
    }   
    printf("")
    
    }