/*Write a C program to accept & store N real numbers into an array. Find their mean and standard deviation using pointers and display the same to the output screen.
Hint: Use Std. Deviation formula:
N = the size of the population, xi = each value from the population μ = the population mean
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
#include<math.h>
void Evaluate(float arr[],int n,float* mean, float* deviat){
            float sum=0,dev=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        *mean=sum/n;
        for(int i=0;i<n;i++){
            dev+=((arr[i]-*mean)*(arr[i]-*mean));
        }
                    dev=dev/n;
         *deviat=sqrt(dev);
         return;
}
void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    float mean;
    float deviat;
    Evaluate(arr,n,&mean,&deviat);
    printf("The mean  is: %0.02f",mean);
     printf("\nThe standard deviation is: %0.2f",deviat);

}