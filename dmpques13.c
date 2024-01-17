/*Develop a C program to count numbers greater than, less than or equal to a number ‘K’ in an
array.Accept the value of K from the user.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E */
#include<stdio.h>
void main(){
    int k,greater=0,lesser=0,equal=0;
    printf("enter k:");
    scanf("%d",&k);
    int arr[8]={-5,4,6,8,9,10,-1,0};
    for(int i=0;i<8;i++){
        if(arr[i]>k){
            greater++;
        }
        else if(arr[i]<k){
            lesser++;
        }
        else
        equal++;
    }
    printf("Total numbers greater than %d =%d\nTotal numbers lesser than %d =%d\nTotal numbers equal to %d =%d",k,greater,k,lesser,k,equal);
}
// OUTPUT:
// enter k:6
// Total numbers greater than 6 =3
// Total numbers lesser than 6 =4
// Total numbers equal to 6 =1