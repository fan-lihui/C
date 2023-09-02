/*
	求1到100之间能被3整除的数字之和
*/ 
#include<stdio.h>
int main()
{
	int i;
	int sum = 0;
	for(i = 1;i<=100;++i)
	{
		if(i%3==0)
		{
			sum = sum + i;
		}
	}
	printf("sum=%d\n",sum);
	
	return 0;
}
