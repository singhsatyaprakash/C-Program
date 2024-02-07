//print th prime number b/w 1 to n..
#include<stdio.h>
void main(){
    int i,num,n;
    printf("enter n: ");
    scanf("%d",&n);
    for(num=1;num<=n;num++){
         int count=0;
        for(i=2;i<num-1;i++){
            if(num%i==0){
                count++;
                break;}}
                 if(count==0||num!=1){
        printf("%d ",num);
            }
     }
    }
  
