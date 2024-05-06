#include<stdio.h>
int main(){
    FILE *fp=fopen("rhyme.txt","r");
    fseek(fp,0,2);
    int num=ftell(fp);
    printf(" Size of file:%d",num);
    return 0;
}