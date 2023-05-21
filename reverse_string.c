#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter string :");
    scanf("%[^\n]s",str);
    int l=0,size=0;
   //size
    while(str[l]!='\0'){
    size++;
    l++;    
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp[]= str[i];
        str[i]=str[j];
        str[j]=temp;

    }


    printf("The reverse is :");

    return 0;

}