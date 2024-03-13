#include<stdio.h>
#include<stdlib.h> //header library file for dymaic memory allocation
void main(){
    int n,i;
    printf("How many real number:");
    scanf("%d",&n);
    float *ptr=(float*)malloc(n*sizeof(float));
    float mean,sum=0;
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%f",(ptr+i));
    }
    for(i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    mean=sum/n;
    printf("Sum is:%0.2f\nMean is:%0.2f",sum,mean);

}