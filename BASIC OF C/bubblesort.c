#include<stdio.h>
void main()
{
    int n;
printf("enter n:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:\n");
for(int i=0;i<n;i++)
{
    fflush(stdin);
    scanf("%d",&arr[i]);
}
printf("given array:");
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
//bubble sorting
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        // bool flag = true;//array is not sorted yet.
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            // bool = false;
        }
    }
    // if(bool==true)
    // break;
}
printf("sorted arrays:");
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
}