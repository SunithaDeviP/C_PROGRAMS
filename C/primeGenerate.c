#include<stdio.h>
int primeCheck(int num)
{
    int factor;
    for(factor=2;factor<=num-1;factor++)
    {
        if(num%factor==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    for(num=2;num<=100;num++)
    {
        if(primeCheck(num)==1)
            printf("%d ",num);
    }
    return 0;
}




