#include<stdio.h> 
int main()
{
	int a[5] = {1,2,3,4,5};
	//a����������֣�5��ʾ����ĸ�����������5��Ԫ�طֱ���a[0] a[1] ... a[4]��ʾ
	int i;
	for(i = 0;i<5;++i)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
