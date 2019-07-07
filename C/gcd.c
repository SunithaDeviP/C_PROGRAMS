#include<stdio.h>
int main()
{
    int num1=20,num2=40;
    int factor;
    factor=(num1<num2)?num1:num2;
    for(;;factor--)
    {
        if(num1%factor==0 && num2%factor==0)
            break;
    }
    printf("GCD : %d",factor);
    return 0;
}
