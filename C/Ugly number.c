#include<stdio.h>
int main()
{
    int num=49,factor=2,flag=0;
    while(num!=1 && flag==0)
    {
        while(num%factor==0)
        {
            num=num/factor;
            printf("%d ",factor);
            if(factor!=2 && factor!=3 && factor!=5)
            {
                flag=1;
                break;
            }
        }
        factor++;
    }
    if(flag==1)
        printf("Not an ugly number");
    else
        printf("Ugly number");
    return 0;
}
