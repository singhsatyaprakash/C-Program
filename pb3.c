/*Develop a C Program to read N integers into an array from the user and
 then copy the even and odd numbers into another set of arrays. Then 
 find the maximum element of both even and odd arrays & display it to the console..*/
 #include<stdio.h>
 void main()
 {
    int n;
    printf("enter the number of element to read:");
    scanf("%d",&n);
    //reading n element
    int arr[n],even[n],odd[n];
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //finding even and odd out of the array..
    int a=0,b=0;//a=no. of element in even array. ||b=no.of array element in odd arary.
    for(int i=0;i<n;i++)
    {
       if(arr[i]%2==0)
        {
            even[a]=arr[i];
            a++;
        }
      else
        {
            odd[b]=arr[i];
            b++;
        }
    }
    printf("even array:");
    for(int i=0;i<a;i++)
    {
        printf("%d ",even[i]);
    }
     printf("\nodd array:");
    for(int i=0;i<b;i++)
    {
        printf("%d ",odd[i]);
    }
    //finding element of odd[] array...
    int maxe=even[0];
    for(int i=1;i<a;i++)
    {
        if(even[i]>maxe)
        {
            maxe=even[i];
        }
    }
        printf("\nmax of even array is:%d\n",maxe);
    int maxo=odd[0];
    for(int i=1;i<b;i++)
    {
        if(odd[i]>maxo)
        {
            maxo=odd[i];
        }
    }
        printf("max of odd array is:%d",maxo);
 }