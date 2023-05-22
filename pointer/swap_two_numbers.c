#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x;
    *x =*y;
    *y =temp;                 //  pass by value problem can be solved using pointers as pointers stores address which cannot be changed
    return;
}
int main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is %d\n",a);
     printf("The value of b is %d\n",b);
}
/* double pointers int* -> integer ka address deta hai
int ** -> int*(pointer) ka address deta hai */
