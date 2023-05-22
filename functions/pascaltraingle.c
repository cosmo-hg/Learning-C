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
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
             int ncr = fact(i)/(fact(j)*fact(i-j));
    printf("%d ",ncr);
        }
        printf("\n");
    }
}