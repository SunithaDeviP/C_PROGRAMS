#include<stdio.h>
int LCM(int num1,int num2)
{
    int lcm,rem;
    lcm=num1*num2;
    if(num1<num2)
    {
        num1=num1+num2;
        num2=num1-num2;
        num1=num1-num2;
    }
    while(num2!=0)
    {
        rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    lcm=lcm/num1;
    return lcm;
}
int main()
{
    int num,lcm;
    lcm=1;
    for(num=1;num<=10;num++)
    {
        lcm=LCM(lcm,num);
    }
    printf("%d",lcm);
    return 0;
}
