#include<stdio.h>
#include<math.h>
//����һԪ���η��̵Ľ�
 int main (void)
 {
 	//�� b*b - 4*a*c �����Ŵ���0���������⣻����0����һ���⣻С��0���޽⣻ 
 	//��Ϊ��(-b +- sqrt(b*b - 4*a*c)) / (2*a)
 	int a,b,c;//����ϵ�� 
	 a = 1;
	 b = 2; 
	 c = 1;
	double x1,x2;//������ 
	double delta = b*b - 4*a*c;
	if(delta > 0) 
	{
		//��������
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a); 
		printf("��һԪ���η��̵Ľ�Ϊ��x1 = %f, x2 = %f\n", x1, x2 );
	}
	else if(delta == 0 ) 
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = x1;
		printf("��һԪ���η��̵Ľ�Ϊ��x1 = x2 = %f\n", x2);
	}
	else
	{
		printf("�޽�"); 
	}
 	return 0;
 }
