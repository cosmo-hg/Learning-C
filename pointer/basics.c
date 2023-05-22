// pointers is variable ka address
// %p se address print hota hai
// address tabhi assign hot hai jab code run karte hai
/* int a=5;
if we want to store this address use int* (use to write pointers) x =&a;(&a is used to store address of a in the pointer x)*/
#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    printf("%p\n",&a);   // prints value of address of a
    printf("%p\n",&x);   // prints value of address of x
    printf("%d\n",*x);     // prints value of the variable whose address is stored in pointer x
                         // easy way to remember is pointer ka pointer again variable par he le jaata hai
    //now we change value of a using *x
    *x = 7;
    printf("%d",a);                     
}