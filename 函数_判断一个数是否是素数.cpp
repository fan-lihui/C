//�ж�һ�����Ƿ�������
//1 �� ������ ����ȥ����ֻ�������Ƿ��ܳ��� 2  -  val-1 

#include <stdio.h> 
bool IfPrime(int val)
{
	int i;
	for(i = 2;i<val;i++)
	{
		if(val%i==0)//������Գ�����˵��2  -  val-1���п��Գ������������������� 
		{
			break;//ֱ����ֹѭ������ 
		 } 
		 
	}
	if(i == val) 
	 {
	 	return true;
	 }
	else
	 {
	 	return false;
	 }
	
 } 
int main()
{
	int m;
	
	scanf("%d",&m);
	if(IfPrime(m))
	{
		printf("YES!");
	}
	else
	{
		printf("NO!");
	}
	return 0;
}
