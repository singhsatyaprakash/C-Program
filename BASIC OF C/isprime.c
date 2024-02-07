/*Desgin a user defined function Isprime that takes in a integer and return 1 if it is prime otherwise return 0.
Implement a C program to read a range from r1 to r2 and print all the prime number between them...*/
#include<stdio.h>
int isprime(int x){
    int flag=0;
    for(int j=2;j<x;j++){
        if(x%j==0){
        flag=1;
        break;}
        if(flag==1)
        return 0;
    else 
    return 1;
    }
     
}
//int isprime(int);
void main(){
    int r1,r2;
    printf("Enter range(r1-r2):");
    scanf("%d%d",&r1,&r2);
    for(int i=r1;i<=r2;i++){
        int result= isprime(i);
        if(result==1){
            printf("%d ",i);
        }
    }
}