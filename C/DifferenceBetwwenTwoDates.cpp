#include<stdio.h>

int d1,m1,y1,d2,m2,y2;

i
int checkMonthDays(int m1,int leap)
{
	int days=checkMonth(m1)-d1;
	
	for(int i=m1+1;i<=12;i++)
	{
		
		if(leap==1 && i==2)
		{
			days=days+29;
		}
		else if(i==2)
		{
			days=days+28;
		}
		if(i==4||i==6||i==9||i==11)
		{
			days=days+30;
		}
		else
			days=days+31;
	}

	return days;
}
int checkNextMonthDays(int m1,int leap)
{
	int days=0;
	for(int i=1;i<=m1;i++)
	{
		if(leap==1 && i==2)
		{
			days=days+29;
		}
		else if(i==2)
		{
			days=days+28;
		}
		if(i==4||i==6||i==9||i==11)
		{
			days=days+30;
		}
		else
			days=days+31;
	}
	return days;
}

int isLeap(int y)
{
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
				return 1;
			else
			return 0;
		}
		else
		return 1;
	}
	else
	return 0;
}
int checkYearDays(int y1,int y2)
{
	int days=0;
	for(int i=y1;i<=y2;i++)
	{
		if(isLeap(i))
		{
			printf("LEAP YEAR = %d\n",i);
			days=days+366;
		}
		else
		days=days+365;
	}
	return days;
}
int main()
{
	printf("\nENTER TWO DATES : ");
	printf("\nDATE1 : ");
	scanf("%d/%d/%d",&d1,&m1,&y1);
	printf("\nDATE2 : ");
	scanf("%d/%d/%d",&d2,&m2,&y2);
	int days = checkYearDays(y1+1,y2-1);
	printf("\nDAYS BETWEEN YEARS%d",days);
	int remaining =0;
	 remaining = checkMonthDays(m1,isLeap(y1));
	printf("\nREAMING DAYS YEAR1 = %d",remaining);
	int nextremaining = checkNextMonthDays(m2-1,isLeap(y2));
	printf("\nREAMING DAYS = %d",nextremaining);
	int d = days+remaining+nextremaining+d1+d2;
	printf("\nTOTAL DAYS = %d",d);
}
