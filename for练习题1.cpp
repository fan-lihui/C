/*
	求1到100之间的奇数之和 
*/ 
#include<stdio.h>
int main()
{
	int i;
	int sum = 0;
	for(i=1;i<=100;++i)
	{
		if(i%2==0)
		{
			sum = sum + i;
		}
	} 
	printf("sum=%d\n",sum);
	return 0;
 } 
 /*
 	在Dev-C++5.11中的输出结果为：
	 ---------------------------------
	 sum=2550
	 --------------------------------- 
 */
