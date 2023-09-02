#include<stdio.h>
#include<math.h>
//计算一元二次方程的解
 int main (void)
 {
 	//当 b*b - 4*a*c 开根号大于0，有两个解；等于0，有一个解；小于0，无解； 
 	//解为：(-b +- sqrt(b*b - 4*a*c)) / (2*a)
 	int a,b,c;//三个系数 
	 a = 1;
	 b = 2; 
	 c = 1;
	double x1,x2;//两个解 
	double delta = b*b - 4*a*c;
	if(delta > 0) 
	{
		//有两个解
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a); 
		printf("此一元二次方程的解为：x1 = %f, x2 = %f\n", x1, x2 );
	}
	else if(delta == 0 ) 
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = x1;
		printf("此一元二次方程的解为：x1 = x2 = %f\n", x2);
	}
	else
	{
		printf("无解"); 
	}
 	return 0;
 }
