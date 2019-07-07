#include<stdio.h>
int main()
{
    int num1=12,num2=40,rem,lcm;
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
    printf("GCD:%d LCM:%d",num1,lcm);
    return 0;
}
