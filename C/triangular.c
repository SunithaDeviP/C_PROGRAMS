#include<stdio.h>
int main()
{
    int num,itr;
    itr=1;
    num=16;
    while(num>0)
    {
        num=num-itr;
        itr++;
    }
    if(num==0)
        printf("Triangular");
    else
        printf("Not a triangular");
    return 0;
}
