#include<stdio.h>
int stair(int n){
if(n<=2) return n;
if (n==3) return 4;
int totalways=stair(n-1)+(n-2)+(n-3);
return totalways;
}
int main(){
    int n;
     printf ("Enter no. of stairs:");
     scanf("%d",&n);
     printf("%d",stair(n));
     return 0;
}