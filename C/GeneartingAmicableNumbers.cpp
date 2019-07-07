#include<stdio.h>

int factors(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
//	printf("\nfactors are = ",sum);
	return sum;
}
void isAmicable(int n1)
{
	int fac1 = factors(n1);
	int n2,fac2;
	if(n1<fac1)
	{
		
		n2 = fac1;
		fac2 = factors(n2);
		printf("%d %d\n",n1,n2);
	}
	if(n1==fac2 && n2==fac1)
	printf("%d %d ",n1,n2);
}
int main()
{
	int start,end;
	scanf("%d %d",&start,&end);
	for(int i=start;i<=end;i++)
	{
		isAmicable(i);
	}
}
