// You are using GCC
#include<stdio.h>

int main()
{
    unsigned long long int n,i=2;
    scanf("%llu",&n);
    while(n!=1)
    {
        while(n%i==0)
        {
            n=n/i;
        }
        i++;
    }
    printf("%llu",i-1);
}

