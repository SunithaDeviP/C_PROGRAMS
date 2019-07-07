#include<stdio.h>
int main()
{
    int original=15723,num,digit,pv=1,rev=0,position=1000;
    num=original%position;
    rev=original/position;
    while(num/pv!=0)
    {
        digit=(num/pv)%10;
        pv=pv*10;
        rev=(rev*10)+digit;
    }
    printf("%d\n",rev);
    return 0;
}
