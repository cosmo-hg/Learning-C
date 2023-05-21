// print value of ncr using functions 
#include<stdio.h>
int fact(int x){
    int fac=1;
    for (int i=2;i<=x;i++){
        fac = fac* i;
    }
    return fac;
}
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int r;
    printf("Enter value of r:");
    scanf("%d",&r);
   
    int ncr = fact(n)/(fact(r)*fact(n-r));
    printf("%d",ncr);
}