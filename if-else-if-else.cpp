/*
	һ��Ҫ���׳���Ϊʲô��������
	 [Error] 'else' without a previous 'if'
	 else ��Ϊprintf("����\n")���ֳ���������䣬û��ƥ�䵽 if 
*/ 
#include<stdio.h>
int main()
{
	int delta = 1;
	if(delta > 0)
		printf("�˳�����������"); 
	printf("����\n"); //�˴���һ������䣬��if-else if �ֿ��ˣ�����else-if����Ч�� 
	else if(delta == 0)
		printf("�˳�����������ͬ�Ľ�");
	else
		printf("�޽�"); 
	return 0;
}
