/*
	求1到100之间的奇数之和，偶数之和 
*/
#include<stdio.h>
int main()
{
	int i;
	int sum = 0;
	int count = 0;//记录奇数的个数 
	double avg =0;//奇数的平均值 
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			sum = sum + i;
			count=count+1; 
		 } 	 
	}
	printf("1到100之间的奇数个数为：%d\n",count);
	printf("1到100之间的奇数之和为：%d\n",sum);
	avg=sum/count;
	printf("奇数的平均值为：%lf\n",avg);
	return 0;
	
}
