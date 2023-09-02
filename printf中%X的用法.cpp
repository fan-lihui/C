/*
	2023/8/2 22:42
	目的：
		测试%x %X %#x %#X的用法 
*/
#include<stdio.h>
int main()
{
	int x = 47;
	printf("%x\n",x);  //2f
	printf("%X\n",x);  //2F
	printf("%#x\n",x); //0x2f
	printf("%#X\n",x); //0X2F
	return 0;
	
}
/*
	在 Dev-C++5.11中的输出结果是：
------------------
2f
2F
0x2f
0X2F
------------------ 
	总结 
*/

