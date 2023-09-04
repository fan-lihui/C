#include<stdio.h>
int main() {
	
	int a[5];//定义数组
	int i;
	scanf("%d",&a[0]);
	printf("a[0]=%d\n",a[0]);
	scanf("%d",&a[3]);
	printf("a[3]=%d\n",a[3]);
	
	for(i=0;i<5;++i)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
/*
	在Dev-C++5.11中的输出结果为：
--------------------------
2 
a[0]=2
4 
a[3]=4
2 0 35 4 35
-------------------------- 
	 2，4都是手动输入的值 ，其余的值是垃圾值 
*/
