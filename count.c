#include<stdio.h>
int main(){
    int count=0,x;
    printf("Enter x: ");
    scanf("%d",&x);
    int arr[7]={5,25,400,-3,32,1000,0};
    for(int i=0;i<7;i++){
        if(arr[i]>x)
        count++;}
    if(count==0)
    printf("none of them are greater than %d",x);
else 
printf("count=%d",count);
    return 0;
}