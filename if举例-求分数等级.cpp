#include<stdio.h> 
int main()
{
	double score;
	printf("���������Ŀ��Գɼ���\n");
	scanf("%lf",&score);
	if(score > 100)
		printf("�������Σ�");
	else if(score >= 90 && score <=100) 
	//C�����в���ʹ�� 90<=score<=100 
	//��Ϊ90<=score ���ʽ��ֵ��ԶΪ�棨1����٣�0�� 0||1 <= 100  
		printf("���㣡");
	else if(score >= 80 && score <90)
		printf("���ã�") ;
	else if(score < 80 && score >= 60)
		printf("����");
	else
		printf("������"); 
	return 0;
}
