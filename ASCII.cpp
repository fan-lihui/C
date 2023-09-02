#include<stdio.h>
int main()
{
	//char ch = 'A';
	//char ch = 'AB'; //因为 'AB'是字符串，我们不能把字符串赋值给单个字符变量 
	//char ch = "A"; "A" 代表字符 A 和 结束符 \0 两个字符 不能存储在char类型中 
	char ch = 'B'; //这一行不能和第4行同时出现，会重复定义ch 变量
	ch = 'C';//正确，这里才会覆盖B 
	printf("%c\n",ch);
	return 0;
 } 
