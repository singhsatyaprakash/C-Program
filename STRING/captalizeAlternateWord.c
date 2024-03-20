#include<stdio.h>
int main()
{
char s[100];
int i,space=0;
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==32)
space++;
else if(space%2==0 && s[i]>='a'&&s[i]<='z')
{
s[i]=s[i]-32;
}
}
printf("%s",s);
}