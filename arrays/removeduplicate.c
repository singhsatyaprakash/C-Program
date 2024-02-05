 #include<stdio.h>
 void main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    printf("ente the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=n-1;
    for(int i=0;i<n;i++){
        if (arr[i]==-1)
        continue;
    for(int j=i+1;j<n;j++){
        if (arr[i]==arr[j]){
            count--;
            arr[j]= ;
        }
    }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}