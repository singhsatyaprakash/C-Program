#include<stdio.h>
int powerlog(int a ,int b)
{ if (b==0) return 1;
    // if(b==1)
    // return a;
     int x=powerlog(a,b/2);
     if(b%2==0)
        return x*x;
     else
        // return (powerlog(a,(b+1)/2)*powerlog(a,(b-1/2)));
    return x*x*a;
}
int main(){
    int a,b;
     printf ("Enter base:");
     scanf("%d",&a);
     printf ("Enter power:");
     scanf("%d",&b);
     printf("%d raised to power %d =%d",a,b,powerlog(a,b));
     return 0;
}