#include<stdio.h>
int main()
{
    int num=100,factor,count[100],index=0,position;
    while(num!=1)
    {
        while(num%factor==0)
        {
            num=num/factor;
            count[index]=factor-1;
            index++;
        }
        factor++;
    }
    for(position=index-1;position>=0;position--)
    {

    }
    return 0;
}
