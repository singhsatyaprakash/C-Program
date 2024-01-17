//take input of sorted array and find two number such that they add up to a specific target number.
#include<stdio.h>
void main()
{int n;
printf("Enter n : ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:");
for(int i=0;i<n;i++)
{
    fflush(stdin);
    scanf("%d",&arr[i]);
}
    int target=8;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==target)
        {
            break;
        }
        else if(arr[i]+arr[j]>target)
        {
            j--;
        }
        else if(arr[i]+arr[j]<target)
        {
            i++;
        }
    }
    printf("Numbers are:%d and %d",arr[i],arr[j]);
}