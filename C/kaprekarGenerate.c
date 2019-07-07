#include<stdio.h>
int Kaprekar(int num)
{
    unsigned long long int square;
    int nod=0,pv=1,right_count,right,left;
    square=num*num;
    while((square/pv)!=0)
    {
        pv=pv*10;
        nod++;
    }
    right_count=(nod+1)/2;
    pv=1;
    while(right_count--)
        pv=pv*10;
    right=square%pv;
    left=square/pv;
    while(right==0)
    {
        pv=pv*10;
        right=square%pv;
        left=square/pv;
    }
    if((right+left)==num)
        return 1;
    else
    {
        while(left%10==0 && left!=0)
        {
            left=left/10;
        }
        if((right+left)==num)
            return 1;
        else
            return 0;
    }
}
int main()
{
    int num;
    for(num=1;num<=70000;num++)
    {
        if(Kaprekar(num)==1)
            printf("%d ",num);
    }
    return 0;
}
