#include<stdio.h>
int main() {
	int i;
	int sum1 = 0;//����֮��
	int sum2 = 0;//ż��֮��

	for(i=1; i<=100; ++i) {
		if(i%2==1) { //������
			sum1 += i;
		} else {//��ż�� 
			sum2 += i;
		}

	}
	printf("sum1 = %d\n",sum1);
	printf("sum2 = %d\n",sum2);
	return 0;
}
/*
	��Dev-C++�е����н��Ϊ��
-----------------------------
sum1 = 2500
sum2 = 2550 
-----------------------------
*/
