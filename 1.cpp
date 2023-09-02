#include<stdio.h>
int main(void)
{
	int i = 10.6;//表示变量i是整型变量，所谓整型变量就是指i只能存放整数
	
	printf("%d\n",i);//10 精度损失 
	int q = 'A';
	printf("%d\n",q);
	return 0; 
}
