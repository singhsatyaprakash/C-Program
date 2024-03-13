#include<stdio.h>
void main(){
    char str[]="GRAPHIC ERA";
    char *cptr=&str;
    printf("%u\n",cptr);
    printf("%s\n",cptr+3);
    printf("%c",cptr[3]);
    // printf("%s\n",3[cptr]);
 }