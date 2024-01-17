#include<stdio.h>
#include<limits.h>
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
printf("given array:\n");
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
//selection sorting
for(int i=0;i<n-1;i++)
{ int min=INT_MAX;
int minidx=-1;
    for(int j=i;j<n;j++)//finding minimum and its index of element...
    {
        if(min>arr[j])
        {
            min=arr[j];
            minidx=j;
        }
    }
    //swaping the min and first element of unsorted array..
    //swap min and i
    int temp=arr[minidx];
            arr[minidx]=arr[i];
            arr[i]=temp;

}
printf("\nsorted arrays:\n");
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
}