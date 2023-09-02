/*
	一定要明白程序为什么会编译出错
	 [Error] 'else' without a previous 'if'
	 else 因为printf("哈哈\n")语句分成了两个语句，没有匹配到 if 
*/ 
#include<stdio.h>
int main()
{
	int delta = 1;
	if(delta > 0)
		printf("此程序有两个解"); 
	printf("哈哈\n"); //此处是一条新语句，将if-else if 分开了，所以else-if是无效的 
	else if(delta == 0)
		printf("此程序有两个相同的解");
	else
		printf("无解"); 
	return 0;
}
