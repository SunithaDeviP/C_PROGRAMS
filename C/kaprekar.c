#include<stdio.h>
int main()
{
    int num=2;
    int square;
    int nod=0,pv=1,right_count,right,left;
    square=num*num;
    while((square/pv)!=0)
    {
        pv=pv*10;
        nod++;
    }
    printf("NOD:%d\n",nod);
    right_count=(nod+1)/2;
    printf("Right Count:%d\n",right_count);
    pv=1;
    while(right_count--)
        pv=pv*10;
    printf("PV:%d\n",pv);
    right=square%pv;
    left=square/pv;
    while(right==0)
    {
        pv=pv*10;
        right=square%pv;
        left=square/pv;
    }
    printf("Right:%d Left:%d\n",right,left);
    if((right+left)==num)
        printf("Yes");
    else
    {
        while(left%10==0 && left!=0)
        {
            left=left/10;
        }
        if((right+left)==num)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}





