#include<stdio.h>
int main()
{
	int i;
	scanf("m%d",&i);
	printf("i = %d",i); 
	return 0 ;
	/*
	在Dev-C++5.11中输出的结果为：
	-------------------------
	m123
	i = 123 
	或
	m123hfu
	i = 123
	 
	------------------------- 
	总结：用户必须原样输入非输入控制符 
		当用户输入m123hfu时不能按照实数输出，所以只输出了123 
	*/
 } 
