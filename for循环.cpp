/*
	2023/9/1
	使用for循环 求3到10的和 
*/ 
# include <stdio.h>
int main(void)
{
	int i;
	int sum = 0; 
	
	for(i=3;i<=10;++i)
		sum = sum + i;	
	printf("sum=%d\n",sum);
	return 0;
 } 
 /*
 	------------------
 	在Dev-C++5.11中的输出结果为： 
	 sum=52
 	------------------
 */ 
