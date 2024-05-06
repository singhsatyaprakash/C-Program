#include<stdio.h>
#include<string.h>
int details(char str[],char arr[]){
char *ptr=&str[0];
char *ptr1=&arr[0];
int l=strlen(str);
int i=0,j=0;
if(l%2!=0){
while(*(ptr+i)!='\0'){
if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u'||*(ptr+i)=='A'||*(ptr+i)=='E'||*(ptr+i)=='I'||*(ptr+i)=='O'||*(ptr+i)=='U'){
*(ptr1+j)=*(ptr+i);
j++;
}
i++;
}
return 1;
}
else{
return l;
}
}

int main(){
char str[100],arr[100];
printf("Enter string:");
scanf("%[^\n]s",str);
int res=details(str,arr);
if(res%2!=0){
printf("String contain only vowels:%s\n",arr);
}
else{
printf("Length of string:%d\n",res);
}
return 0;
}

