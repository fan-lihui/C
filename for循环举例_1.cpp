/*
	2023��9��1��21:55 
	��1��10 ֮�������֮�� 1+3+5... 
*/ 
#include <stdio.h>
int main()
{
	int i;
	int sum = 0;
	int count = 0;//���� 
	for(i=1;i<=10;i+=2){
			sum = sum + i;
		//��֤������������ 
		count++; 
	} 
	printf("count = %d\n",count);//��ʱcount=5 
	printf("sum = %d\n",sum);
	return 0;
 } 
 /*
 	--------------------------- 
 	��Dev-C++5.11�е����н��Ϊ��
	 sum = 25 
	--------------------------- 
 */
