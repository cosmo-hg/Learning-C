#include<stdio.h>
int sum(int x,int y){
    return x+y;
}
int main (){ 
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);                  // values of a and b taken here goes to the function x and y values
int result = sum(a,b);
printf("%d",result);
return 0;
}