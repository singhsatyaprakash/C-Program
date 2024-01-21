#include<stdio.h>
int maze(int cr,int cc,int er,int ec)
{
    int rightways=0;
    int downways=0;
    if(cc=ec && cr==er){
    return 1;}
    if(cc==ec){//only downways
    downways +=maze(cr+1,cc,er,ec);}
    if(cr==er){//only rightways
    rightways +=maze(cr,cc+1,er,ec);}
    if(cr<er && cc<ec){
    downways +=maze(cr+1,cc,er,ec);
    rightways +=maze(cr,cc+1,er,ec);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n,m;
    printf("enter rows:");
    scanf("%d",&n);
    printf("enter columns:");
    scanf("%d",&m);
    printf("%d",maze(1,1,n,m));
    return 0;
}
// #include<stdio.h>
// int maze(int cr,int cc,int er,int ec)
// {
//     int rightways=0;
//     int downways=0;
//     if(cc=ec && cr==er){
//     return 1;}
//     if(cc==ec){//only downways
//     downways +=maze(cr+1,cc,er,ec);}
//     if(cr==er){//only rightways
//     rightways +=maze(cr,cc+1,er,ec);}
//     if(cr<er && cc<ec){
//     downways +=maze(cr+1,cc,er,ec);
//     rightways +=maze(cr,cc+1,er,ec);
//     }
//     int totalways=rightways+downways;
//     return totalways;
// }
// int main()
// {
//     int a,b,y,z,n,m;
//     // printf("Enter starting point (a,b):\n");
//     // scanf("%d",&a);
//     // scanf("%d",&b);
//     printf("Enter ending point (y,z):\n");
//     scanf("%d",&y);
//     scanf("%d",&z);
//     // printf("Enter row and columns (n,m)\n:");
//     // scanf("%d",&n);
//     // scanf("%d",&m);
//     int totalways=maze(1,1,y,z);
//     printf("total no. path follow =%d",totalways);
//     return 0;
// }