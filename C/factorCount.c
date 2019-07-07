#include<stdio.h>
int main()
{
    int factorCount=0,num=1,factor;
    while(factorCount!=100)
    {
        printf("%d ",num);
        num++;
        factorCount=0;
        for(factor=1;factor<=num;factor++)
            if(num%factor==0)
            factorCount++;
    }
    printf("\nResult:%d ",num);
    return 0;
}
