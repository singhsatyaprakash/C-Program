/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:
Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
*/
#include<stdio.h>
#include<math.h>
void main(){
    int m,n;
    printf("Enter m:");
    scanf("%d",&m);
    int l1[m];//reading first array. l1 = [2,4,3]
    printf("Enter element of l1:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&l1[i]);
    }
    printf("Enter n:");
    scanf("%d",&n);
    int l2[n];//reading second array. l2 = [5,6,4]
    printf("Enter element of l2:\n");
     for(int i=0;i<n;i++){
        scanf("%d",&l2[i]);
    }
    int num_l1=0;
    for(int i=m-1;i>=0;i--){
        num_l1+=l1[i];
        if(i!=0){
            num_l1*=10;
        }
    } 
int num_l2;
for(int i=n-1;i>=0;i--){
        num_l2+=l2[i];
        if(i!=0){
            num_l2*=10;
        }
    }
    int num=num_l1 + num_l2;
    //counting digit of total.
    int count=0;
    int temp=num;//to prevent total
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    //reprinting number..
    printf("\n%d %d %d %d",num_l1,num_l2,num,count);
    //split total and store in array of reverse order.
    int output[count];
    for(int i=0;i<count;i++){
        while(num!=0){
            int d=num%10;
            num=num/10;
            output[i]=d;
        }
    }
    //printing output array.
    for(int i=0;i<count;i++){
        printf("%d ",output[i]);
    }
}
