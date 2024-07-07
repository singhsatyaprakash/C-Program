#include<stdio.h>
struct compute{
    int n1,n2;
    int rem;
    float quot;
};
void calresult(struct compute *cmt){
    cmt->rem=(cmt->n1)%(cmt->n2);
    cmt->quot=(float)(cmt->n1)/(cmt->n2);
}

int main(){
    struct compute cmt;
    printf("Enter n1 & n2:");
    scanf("%d-%d",&cmt.n1,&cmt.n2);
    calresult(&cmt);
    printf("remainder:%d\nquotient:%d\n",cmt.rem,cmt.quot);
    return 0;
}