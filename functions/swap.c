#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The value of a is %d\n",a);     /*instead of using a third variable we can use a=a+b
                                                                                           b=a-b
                                                                                           a=a-b it also works the same  */
    printf("The value of b is %d",b); 
}
