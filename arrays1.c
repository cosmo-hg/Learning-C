 /* program to check whether any of the digits in number appear more than once */
 #include <stdio.h>
 int main()
 {
    int seen[10]={0};
    int n;
    printf("Enter your number:");
    scanf("%d",&n);

    int rem;
    while(n>0)
    {
        rem=n%10;
        if(seen[rem]==1)
        break;
        seen[rem]=1;
        n=n/10;
    }

    if(n>0)
    printf("Yes");
    else
    printf("No");
    return 0;
 }


