#include<stdio.h>

int main()
{
	if(4)
		printf("AAAA\n");
	if(0)
		printf("BBBB\n");
		printf("CCCC\n");
	return 0;
 } 
 /*
 在Dev-C++5.11中的输出结果为
 -------------------------
 AAAA
 CCCC
 ------------------------- 
 结论：if默认的只能控制一个语句的执行或不执行 
 */
 
 
