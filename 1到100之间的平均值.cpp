#include<stdio.h>
int main() {
	int i;
	int sum = 0;
	int count = 0;//个数
	float avg;//平均值
	for(i=1; i<=100; ++i) {
		if(i%2==1) { //是奇数
			sum += i;
			++count;
		}

	}
	avg = 1.0*sum/count;//1.0默认是double类型
	printf("sum = %d\n",sum);
	printf("count = %d\n",count);
	printf("avg=%f\n",avg);
	return 0;
}
/*
	在Dev-C++中的运行结果为：
	------------------------
	sum = 2500
	count = 50
	avg=50.000000
	------------------------
*/ 
