#include<stdio.h> 
int main()
{
	int a[5] = {1,2,3,4,5};
	//a是数组的名字，5表示数组的个数，并且这5个元素分别用a[0] a[1] ... a[4]表示
	int i;
	for(i = 0;i<5;++i)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
