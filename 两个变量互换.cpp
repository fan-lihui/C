/*
���ֻ��� 
*/ 
#include<stdio.h>
int main()
{
	int i,j;
	i = 3;
	j = 5;
	int temp;//������ʱ����
	 
	temp = i; 
	i = j;
	j = temp;
	printf("i = %d j = %d",i,j);
	
	return 0;
}
