//判断一个数是否是素数
//1 和 它本身 不用去除，只尝试它是否能除尽 2  -  val-1 

#include <stdio.h> 
bool IfPrime(int val)
{
	int i;
	for(i = 2;i<val;i++)
	{
		if(val%i==0)//如果可以除尽，说明2  -  val-1中有可以除尽的数，它不是素数 
		{
			break;//直接终止循环即可 
		 } 
		 
	}
	if(i == val) 
	 {
	 	return true;
	 }
	else
	 {
	 	return false;
	 }
	
 } 
int main()
{
	int m;
	
	scanf("%d",&m);
	if(IfPrime(m))
	{
		printf("YES!");
	}
	else
	{
		printf("NO!");
	}
	return 0;
}
