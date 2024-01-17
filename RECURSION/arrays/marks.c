#include<stdio.h>
int main(){
    int mark[5]={34,32,35,37,99};
    for(int i=0;i<5;i++){
        if(mark[i]<35){
            printf("roll no:%d\n",i+1);//printing roll no. who get less than 35 marks.
        }
    }return 0;
    }