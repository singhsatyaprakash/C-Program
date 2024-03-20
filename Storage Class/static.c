#include<stdio.h>
void fun(int x){
    static int y=10;//once it run
    printf("X=%d,Y=%d\n",x,y);
    x++;
    y++;
}
int main(){
    int i,x=25;
    for(i=0;i<5;i++){
        fun(x);
    }
    return 0;
}