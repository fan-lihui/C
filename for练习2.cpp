/*
	求1到100之间的奇数的个数 
*/
#include<stdio.h> 
int main()
{
	int i;
	int count = 0;
	for(i = 1;i<=100;++i)
	{
		if(i%2==0)
		{
			count++;
		}
	}
	printf("count=%d\n",count);
	return 0;
	
 } 
