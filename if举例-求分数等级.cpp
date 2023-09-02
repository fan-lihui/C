#include<stdio.h> 
int main()
{
	double score;
	printf("请输入您的考试成绩：\n");
	scanf("%lf",&score);
	if(score > 100)
		printf("你在做梦！");
	else if(score >= 90 && score <=100) 
	//C语言中不能使用 90<=score<=100 
	//因为90<=score 表达式的值永远为真（1）或假（0） 0||1 <= 100  
		printf("优秀！");
	else if(score >= 80 && score <90)
		printf("良好！") ;
	else if(score < 80 && score >= 60)
		printf("及格！");
	else
		printf("不及格！"); 
	return 0;
}
