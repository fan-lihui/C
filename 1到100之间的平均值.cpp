#include<stdio.h>
int main() {
	int i;
	int sum = 0;
	int count = 0;//����
	float avg;//ƽ��ֵ
	for(i=1; i<=100; ++i) {
		if(i%2==1) { //������
			sum += i;
			++count;
		}

	}
	avg = 1.0*sum/count;//1.0Ĭ����double����
	printf("sum = %d\n",sum);
	printf("count = %d\n",count);
	printf("avg=%f\n",avg);
	return 0;
}
/*
	��Dev-C++�е����н��Ϊ��
	------------------------
	sum = 2500
	count = 50
	avg=50.000000
	------------------------
*/ 
