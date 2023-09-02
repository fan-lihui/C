#include<stdio.h> 
int main()
{
	int i,j;
	printf("请从键盘上输入两个数：\n");
	scanf("%d %d",&i,&j);
	if(i > j)
		printf("i大于j\n");
	else
		printf("i小于j\n");
		
	return 0;
}
