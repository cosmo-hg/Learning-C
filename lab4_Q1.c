#include<stdio.h>
int main()
{
    float arr_base[5];
    int i;
    float d;
    printf("Enter array element 1:");
    scanf("%f",&arr_base[0]);
    for (i=1; i<5; i++)
    {
       scanf("%f",&d);
       if(d>arr_base[i-1])
       {
        arr_base[i]=d;
       }
       else
       {
       printf("Incorrect! Enter again:");
       i--;
       }
    }
double arr_mult[5];
int a;
arr_mult[0]=arr_base[0];
for(a=1; a<5; a++)
{
    arr_mult[a]=arr_base[a]*arr_base[a-1];
}
for(int k=1;k<5;k++)
{
    printf("%f\n",arr_base[k]);
}
printf("\n The multiplication array is:\n");
for(int n=0; n<5; n++)
    {
        printf("%lf\n",  arr_mult[n]);
    }
}

