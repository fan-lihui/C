#include<stdio.h>
int main()
{
	int i;
	int count = 0;//����
	for(i=1;i<=100;++i)
	{
		if(i%2==1) //������ 
		{
			++count;
			printf("i=%d\n",i);//���������ֵ 
		}
		
	 } 
	 printf("count=%d\n",count); 
	return 0;
}
