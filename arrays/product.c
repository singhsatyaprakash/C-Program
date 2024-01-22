#include<stdio.h>
int main(){
    int product=1;
    int arr[7]={5,8,9,3,6,8,8};
    for(int i=0;i<7;i++){
        product =product*arr[i];
    }
    printf("product=%d",product);
    return 0;
}