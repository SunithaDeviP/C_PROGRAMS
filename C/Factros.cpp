#include<stdio.h>
int a[100];
unsigned long long int factors(int n)
{
	unsigned long long int index=0,fac=1,i=2,count=0;
	while(n>1)
	{
		//count=0;
		while(n%i==0)
		{
			count++;
			n=n/i;
			printf("fcators are %d \n",i);
		}
	//	printf("COUNT = %d",count);
		i++;
		
	}
		
	
		printf("factors count  = %d",count);
	return 0;
}
int main()
{
	unsigned long long int n;
	scanf("%llu",&n);
	factors(100);
	
}
