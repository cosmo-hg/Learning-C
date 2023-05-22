//function to calculate the greatest common divisor of two numbers
#include<stdio.h>
int min(int a,int b){
    if(a>b)
    {return b;
    }
    else 
    return a;
}
int gcd(int a,int b){
    int hcf;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0)
    hcf=i;
    break;
    }
    return hcf;
}
int main(){
    int a;
    printf("Enter 1st number:");
    scanf("%d",&a);
     int b;
    printf("Enter 2st number:");
    scanf("%d",&b);
    int hcf =gcd(a,b);
    printf("The hcf of the numbers is %d",hcf);
}