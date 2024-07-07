#include<stdio.h>
    struct linklist{
        int data;
        struct linklist *next;//self refrencial structrue
    };
    int main(){
        struct linklist head,n1,n2,n3;
        head=n1;
        n1.data=100;
        n1.next=NULL;
        n2.data=200;
        n2.next=NULL;
        n1.next=&n2;
        n3.data=300;
        n3.next=NULL;
        n2.next=&n3;
        

        printf("Node 1:%d\n",n1.data);
        printf("Node 2:%d\n",n1.next->data);
        printf("Node 3:%d\n",n1.next->next->data);
    }