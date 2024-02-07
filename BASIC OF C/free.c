//count frequency of element present in array...
#include<stdio.h>
void main()
{
    int n,i,count;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {count =1;
        for(int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
           count++;
        }
    }
    if(count>=1)
    printf("num(%d)===> frequency(%d)",arr[i],count);
}