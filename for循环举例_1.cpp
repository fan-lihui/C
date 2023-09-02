/*
	2023年9月1号21:55 
	求1到10 之间的奇数之和 1+3+5... 
*/ 
#include <stdio.h>
int main()
{
	int i;
	int sum = 0;
	int count = 0;//计数 
	for(i=1;i<=10;i+=2){
			sum = sum + i;
		//验证程序输出了五次 
		count++; 
	} 
	printf("count = %d\n",count);//此时count=5 
	printf("sum = %d\n",sum);
	return 0;
 } 
 /*
 	--------------------------- 
 	在Dev-C++5.11中的运行结果为：
	 sum = 25 
	--------------------------- 
 */
