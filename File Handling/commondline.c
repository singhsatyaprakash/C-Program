#include<stdio.h>
int main(int argc ,char *argv[]){
    int i;
    for(i=0;i<argc;i++){
        printf("\n%s",argv[i]);
    }
    return 0;
}