/*
	��1��100֮�������֮�ͣ�ż��֮�� 
*/
#include<stdio.h>
int main()
{
	int i;
	int sum = 0;
	int count = 0;//��¼�����ĸ��� 
	double avg =0;//������ƽ��ֵ 
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			sum = sum + i;
			count=count+1; 
		 } 	 
	}
	printf("1��100֮�����������Ϊ��%d\n",count);
	printf("1��100֮�������֮��Ϊ��%d\n",sum);
	avg=sum/count;
	printf("������ƽ��ֵΪ��%lf\n",avg);
	return 0;
	
}
