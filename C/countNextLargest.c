#include<stdio.h>
int positionSwap(int num,int pos1,int pos2)
{
    int digit1,digit2;
    digit1=(num/pos2)%10;
    digit2=(num/pos1)%10;
    num=num-(digit1*pos2)-(digit2*pos1);
    num=num+(digit1*pos1)+(digit2*pos2);
    return num;
}
int partialReverse(int original,int position)
{
    int num,digit,pv=1,rev=0;
    num=original%position;
    rev=original/position;
    while(num/pv!=0)
    {
        digit=(num/pv)%10;
        pv=pv*10;
        rev=(rev*10)+digit;
    }
    return rev;
}
int nextLargest(int num)
{
    int rdig,ldig,pv=10,pv2=1;
    rdig=num%10;
    ldig=(num/pv)%10;
    while(num/pv)
    {
        if(rdig>ldig)
        {
            while(1)
            {
            rdig=(num/pv2)%10;
            if(rdig>ldig)
                break;
            pv2=pv2*10;
            }
            num=positionSwap(num,pv,pv2);
            num=partialReverse(num,pv);
            break;
        }
        pv=pv*10;
        rdig=ldig;
        ldig=(num/pv)%10;
    }
    return num;
}
int main()
{
    int num=123456,next;
    int count=0;
    while(1)
    {
        next=nextLargest(num);
        printf("%d ",next);
        if(next==num)
            break;
        count++;
        num=next;
    }
    printf("%d ",count);
    return 0;
}
