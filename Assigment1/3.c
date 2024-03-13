/*Develop a C program to read list of N-items from the user and then store the length of each of the names of the items in another arrays such that the row represents the same index as that of in the N-list array. Display the new modified arrays that shows the names on left side and their corresponding lengths on their right side of the console.
Sample input:
How many Items: 5
Enter the Item Names:
Motorola
Intel
Nvidia
Apple
IBM
Output:
Item-Name Item-Length
Motorola 8
Intel 5
Nvidia 6
Apple 5
IBM 3
*/
#include<stdio.h>
int length(char names[]){
    int i=0;
    while(names[i]!='\0'){
        i++;
    }
    return i;
}
void main(){
    int n;
    printf("How many items:\n");
    scanf("%d",&n);
    int arr[25];
    char names[n][25];
    for(int i=0;i<n;i++){
        fflush(stdin);
        scanf("%[^\n]s",names[i]);
    }
    for(int i=0;i<n;i++){
        int l=length(names[i]);//l=item length
        arr[i]=l;
    }
    printf("ITEM-NAME\tITEM-LENGTH\n");
    for(int i=0;i<n;i++){
        // printf("%s==>%d\n",names[i],arr[i]);
        printf("%s\t%d\n",names[i],arr[i]);
    }
}