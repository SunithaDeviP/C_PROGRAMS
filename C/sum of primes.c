#include<stdio.h>
int main()
{
    int num=19,factor;
    if(num%2==0)
    {
        printf("Yes");
    }
    else
    {
        num=num-2;
        for(factor=2;factor<=num-1;factor++,printf("%d ",factor))
        {
            if(num%factor==0)
                break;
        }
        if(num==factor)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}
