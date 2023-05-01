//This program will read an integer value and print its factorial using recursion, in this program there will be a function which will calculate factorial by calling itself (recursion).
#include<stdio.h>

int facto(int i)
{

 if(i==1)
 return 1;
else 
return i*facto(i-1);

}
int main()
{
    int n,fact;
    printf("Enter the value of number of which you want factorial:");
    scanf("%d",&n);
    fact=facto(n);
    printf("The value of factorial is:%d",fact);
    printf("\n");
    return 0;
}
