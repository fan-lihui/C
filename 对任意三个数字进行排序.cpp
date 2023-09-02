/*
从大到小排序 
*/
#include<stdio.h> 
int main()
{
	int a,b,c;
	int temp;//临时变量 
	printf("请输入任意三个数字（以空格隔开）：\n"); 
	scanf("%d %d %d",&a,&b,&c);
	if(a < b)
	{
		temp = a;
		a = b;
		b = temp; 
	}
	if(a < c)
	{
		temp = b;
		b = c;
		c = temp;
	 } 
	if(b < c)
	{
		temp = b;
		b = c;
		c = temp;
	 } 
	 printf("%d %d %d ",a,b,c);
	return 0;
}
