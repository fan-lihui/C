#include<stdio.h>

/*
	一定要明白为什么这么写是错误的
	一定要明白该程序第7行生效之后为什么程序就正确了 
*/
void f();
 
void g()
{
	f();
}

void f()
{
	printf("哈哈"); 
}

int main()
{
	g();
	
	return 0;
}
