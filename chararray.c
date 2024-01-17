/*wacp to store n character .read from user into an aaray . convert all the upper case v=char into lower case and
 vice versa.and store it back in the same array.dispaly the modify array on screen..*/
 #include<stdio.h>
 void main(){
    int n=3;
    // printf("Enter n:");
    // scanf("%d",&n);
    char arr[]={'q','W','a'};
    // for(int i=0;i<n;i++){//storeing array from user..
    // printf("Enter element:");
    // scanf("%c",&arr[i]);
    }
    for(int i=0;i<n;i++){//coverting lower case to upper and vice versa..
    if(arr[i]>='a'&& arr[i]<='z'){
        arr[i]=arr[i]-32;
    }
    else if(arr[i]>='A'&& arr[i]<='Z'){
        arr[i]=arr[i]+32;
    }
 }
 for(int i=0;i<n;i++){//dispalying the array..
    printf("%c",arr[i]);
 }
 