/*Write a C program to accept N integers from the user into an array. If any integer is positive then subtract 2 from it, if integer is negative add 1 to it and if zero then do nothing. Implement a UDF using a pointer to perform these operations and finally display the modified array to the screen in the calling program.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
void algebra(int arr[],int n){
    int *ptr=&arr[0];
    for(int i=0;i<n;i++){
        if(*(ptr+i)>0){
           *(ptr+i)-=2;
        }else if(*(ptr+i)<0){
           *(ptr+i)+=1;
        }
    }
}
int main(){
    int n;
    printf("How many integers:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    algebra(arr,n);
        for(int i=0;i<n;i++){
            fflush(stdout);
        printf("%d ",arr[i]);
    }

}