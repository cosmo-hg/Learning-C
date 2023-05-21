#include<stdio.h>
void greet(){       
    printf("Hello\n");
    printf("How are you ?");        // basic syntax of function is data_type name of function()
    return;                         // return breaks the function and returns its output 
}
int main(){                         // code always starts from main function
    greet();   // calling of function
    return 0;
}
/* we need to keep the called function above the calling function to avoid error (helpful in case of multiple functions)*/
/* there can only be one main function but we can use infinitely many functions*/