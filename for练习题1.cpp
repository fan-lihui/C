/*
	��1��100֮�������֮�� 
*/ 
#include<stdio.h>
int main()
{
	int i;
	int sum = 0;
	for(i=1;i<=100;++i)
	{
		if(i%2==0)
		{
			sum = sum + i;
		}
	} 
	printf("sum=%d\n",sum);
	return 0;
 } 
 /*
 	��Dev-C++5.11�е�������Ϊ��
	 ---------------------------------
	 sum=2550
	 --------------------------------- 
 */
