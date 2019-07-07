#include<stdio.h>
int main()
{
    int num=15723,pos1=1,pos2=1000;
    int digit1,digit2;
    digit1=(num/pos2)%10;
    digit2=(num/pos1)%10;
    num=num-(digit1*pos2)-(digit2*pos1);
    num=num+(digit1*pos1)+(digit2*pos2);
    printf("%d ",num);
    return 0;
}
