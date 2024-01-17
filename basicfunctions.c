//basic structure of function...
#include<stdio.h>
void greet(){//greet name of functions like main..
    printf("good morning\n");
    printf("how are you?\n");
    return;
}
int main(){//firstly main function excute..
    greet();//call function
    greet();//also allowed in loops , if-else statments
    greet();
    // for(int i=1;i<=5;i++){//use of loops..
    //     greet();
    // }
    return 0;
}