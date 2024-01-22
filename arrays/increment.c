 /*given an array of integers ,change the value of
  all odd indexed elements to its second multiple 
  and increment all even indexed value by 10...*/
 #include<stdio.h>
 int main(){
    int arr[7]={5,6,8,11,16,21,3};
    for(int i=0;i<7;i++){
        if(arr[i]%2!=0){
        arr[i]=arr[i]*2;}
        else if(arr[i]%2==0){
        arr[i]=arr[i]+10;}
    printf("%d ",arr[i]);}
       return 0;
        }
    
 