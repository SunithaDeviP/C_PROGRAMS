#include<stdio.h>
int main()
{
    int num=49,factor=2;
    while(num!=1)
    {
        while(num%factor==0)
        {
            num=num/factor;
            printf("%d ",factor);
        }
        factor++;
    }
    return 0;
}
