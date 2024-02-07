/*Develop a C program to search for an element in a sorted array. Implement it using Binary Search.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
void main()
{
    int i,key,flag=0,mid;
    int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("Enter key:");
    scanf("%d",&key);
    int low=0,high=arr[19];
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>arr[mid])
        {
            low=mid+1;
        }
        if(key<arr[mid])
        {
            high=mid-1;
        }
        if(key==arr[mid])
        {
            flag=1;
            break;
        }
        }
        if(flag)
        {
            printf("SEARCH SUCEESFUL ");
            printf("Element found at %d.",mid+1);
        }
        else
        printf("Element not found.");
}
// OUTPUT:
// Enter key:15
// SEARCH SUCEESFUL Element found at 15.
