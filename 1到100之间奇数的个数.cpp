#include<stdio.h>
int main()
{
	int i;
	int count = 0;//个数
	for(i=1;i<=100;++i)
	{
		if(i%2==1) //是奇数 
		{
			++count;
			printf("i=%d\n",i);//输出奇数的值 
		}
		
	 } 
	 printf("count=%d\n",count); 
	return 0;
}
