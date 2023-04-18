// to add 1 to odd numbers and subtract 1 from even number
#include<stdio.h>
void odd();
void even();
int n=1;

void odd()
{
    if (n<=10)
    {
    printf("%d",n+1);
    n++;
    even();}
    return;
}

void even()
{
    if (n<=10)
    {
    printf("%d",n-1);
    n++;
    odd();
    }
    return;
}

int main()
{
odd();
}
