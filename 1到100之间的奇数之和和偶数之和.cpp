#include<stdio.h>
int main() {
	int i;
	int sum1 = 0;//奇数之和
	int sum2 = 0;//偶数之和

	for(i=1; i<=100; ++i) {
		if(i%2==1) { //是奇数
			sum1 += i;
		} else {//是偶数 
			sum2 += i;
		}

	}
	printf("sum1 = %d\n",sum1);
	printf("sum2 = %d\n",sum2);
	return 0;
}
/*
	在Dev-C++中的运行结果为：
-----------------------------
sum1 = 2500
sum2 = 2550 
-----------------------------
*/
