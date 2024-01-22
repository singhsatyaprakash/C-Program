#include<stdio.h>
int main(){
    int arr[8]={1,3,4,5,7,8,9,9};
         int max=arr[0];
    for(int i=0;i<8;i++){
        if(max<arr[i]){
        max=arr[i];
        }
  
    }      printf("max=%d",max);
    return 0;
}