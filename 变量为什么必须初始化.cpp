/*
所谓初始化就是赋值的意思
如果变量不进行初始化，系统分配的内存空间中可能遗留上个软件运行时留下的垃圾数据
*/
#include<stdio.h>
int main(void)
{
	int i;
	printf("i = %d\n",i);// i = -83545352345 (填充字，此机制告诉我们值是错误的)
	return i;
} 
