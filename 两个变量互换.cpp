/*
数字互换 
*/ 
#include<stdio.h>
int main()
{
	int i,j;
	i = 3;
	j = 5;
	int temp;//定义临时变量
	 
	temp = i; 
	i = j;
	j = temp;
	printf("i = %d j = %d",i,j);
	
	return 0;
}
