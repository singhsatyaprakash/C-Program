/*write C Program to read N integers from the user into an array and then 
find the minimum element of the array and
 check if the sum of all the elements accepted from the user is divisible by the minimum number. 
 Display appropriate message if its divisible.*/
 #include<stdio.h>
 void main()
 {
    //reading n number elements of array
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n]; 
    for(int i=0;i<n;i++)
    {printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    //minimum element of array.
    int min=arr[0];         
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    //sum of all element
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    //checking sum is divisible by min or not ..
    if(sum%min==0)
    {
        printf("Sum (sum=%d) of all %d element of array is divisible by minimum of array.(Min=%d)",sum,n,min);
    }
    else
    {
        printf("Sum (sum=%d) of all %d element of array is not divisible by minimum of array.(Min=%d)",sum,n,min);
    }
 }
