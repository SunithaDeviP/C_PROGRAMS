#include<stdio.h>
int n;


void pattern1(int num)
{
	for(int i=n;i>=num;i--)
	printf("%d",i);
}

void pattern2(int num,int count)
{
	for(int i=1;i<=count;i++)
	printf("%d",num);
}

void pattern3(int start)
{
	for(int i=start;i<=n;i++)
	{
		printf("%d",i);
	}
}

void pattern4(int count)
{
	for(int i=n;i>=count;i--)
	printf("%d",i);
}

void pattern5(int num,int count)
{
	for(int i=1;i<=count;i++)
	printf("%d",num);
}

void pattern6(int start)
{
	for(int i=start;i<=n;i++)
	printf("%d",i);
}
int main()
{
	scanf("%d",&n);
	int mid=n*2-2;
	for(int i=n;i>=1;i--)
	{
		pattern1(i);
		pattern2(i,mid);
		pattern3(i+1);
		mid=mid-2;
		printf("\n");
	}
	mid=1;
	for(int i=2;i<=n;i++)
	{
		pattern4(i);
		pattern5(i,mid);
		pattern6(i);
		mid=mid+2;
		printf("\n");
	}
	
}
