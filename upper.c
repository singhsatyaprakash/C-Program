#include<stdio.h>
void main()
{int n;
printf("Enter n: ");
scanf("%d",&n);
char ch[n];
printf("Enter the character:\n");
for(int i=0;i<n;i++)
{
    scanf("\n%c",&ch[i]);
}
for(int i=0;i<n;i++){
if(ch[i]>='A'&&ch[i]<='Z')
{
    ch[i]=ch[i]+32;
}
else if(ch[i]>='a'&&ch[i]<='z')
{
    ch[i]=ch[i]-32;
}
    printf(" %c ",ch[i]);

}
}
