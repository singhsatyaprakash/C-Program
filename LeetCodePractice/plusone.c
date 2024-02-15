/*You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
Example 1:
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].*/
#include<stdio.h>
void main(){
    int n,d=0,k=0,count=0,temp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    // Taking input of array
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // converting array into number
    for(int i=0;i<n;i++){
        d+=arr[i];
        if(i!=n-1) 
        d*=10;
          k++;
    }
      d++;
      temp=d;
    //   counting the digits of number
     for(int i=0;d!=0;i++){
        d/=10;
          count++;
     }
        //  for the case when the size of the array is icreases by 1
      if(count!=n){
        arr[n+1];
        k++;
      } 
      // converting number into array
     for(int i=0;temp!=0;i++){
        arr[i]=temp%10;
        temp/=10;
      
     }
    printf("\nThe new Plus One array is: ");
     for(int i=k-1;i>=0;i--){
        printf("%d ",arr[i]);
     }

}
