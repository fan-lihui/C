#include<stdio.h>

/*
	һ��Ҫ����Ϊʲô��ôд�Ǵ����
	һ��Ҫ���׸ó����7����Ч֮��Ϊʲô�������ȷ�� 
*/
void f();
 
void g()
{
	f();
}

void f()
{
	printf("����"); 
}

int main()
{
	g();
	
	return 0;
}
