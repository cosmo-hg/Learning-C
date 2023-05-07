#include<stdio.h>
int main()
{
    int A[4]={1,2,3,4},i,*p;
    for(i=0;i<4;i++)
    {
        printf("&A[%d]=%p,A[%d]=%d\n",i,A+i,i,*(A+i));
        
    }p=A;
        printf("p=%p,&p=%p\n",p,&p);
        return 0;

}