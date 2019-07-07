#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("SQRT %d\n",sqrt(n));
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			//printf("%d ",i);	
			if(n/i==i)
			{
				printf("DIVIDE CONDITION %d\n",i);
			}
			else
			{
				printf("\n%d %d\n",i,n/i);
			}
		
		}
	}
	return 0;
}
