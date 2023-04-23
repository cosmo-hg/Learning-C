/* program to write numbers in reverse order */
#include <stdio.h>
int main()
{
    int arr[9]= {34,56,32,67,89,90,32,21};
    int i;
    for(i=0;i<9;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        printf("%d ",arr[8-i]);
    }
}
