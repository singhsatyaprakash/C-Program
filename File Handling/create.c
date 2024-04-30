#include<stdio.h>
int main(){
    FILE *fp=fopen("Create.txt","w+");
    fputs("Programming the file",fp);
    fclose(fp);
    return 0;
}
