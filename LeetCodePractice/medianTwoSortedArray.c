/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).
Example 1:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.*/

//without caring time complexity.
#include<stdio.h>
void main(){
    int m,n;
    printf("Enter m:");
    scanf("%d",&m);
    int l1[m];//reading first array.
    printf("Enter element of l1:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&l1[i]);
    }
    printf("Enter n:");
    scanf("%d",&n);
    int l2[n];//reading second array.
    printf("Enter element of l2:\n");
     for(int i=0;i<n;i++){
        scanf("%d",&l2[i]);
    }
    //merging  both l1 and l2 array.
    int res[m+n];
    int i;
    for(i=0;i<m;i++){
    res[i]=l1[i];
    }
    for(i=0;i<n;i++){
        res[i+m]=l2[i];
    }
// printing merged array.
printf("merged  array is:\n");
for(int i=0;i<m+n;i++){
    printf("%d ",res[i]);
}
printf("\n");
// sorting the merged array.
for(int i=0;i<m+n;i++){
    for (int j=i+1;j<m+n;j++){
        if(res[i]>res[j]){
        int temp=res[i];
        res[i]=res[j];
        res[j]=temp;
    }
    }
}
// printing sorted array.
printf("merged sorted array is:\n");
for(int i=0;i<m+n;i++){
    printf("%d ",res[i]);
}
// finding median of merged array.
int k=m+n;
float median;
    if(k%2==0){// even
    median=(float)(res[k/2-1]+res[k/2])/2;
    }
    else if(k%2!=0){//odd
    median=(float)res[k/2];
    }
    printf("\nmedian is:%f",median);
}

