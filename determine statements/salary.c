//计算工资
//标准时薪为8.25元
//加班按1.5倍时薪
#include<stdio.h>
int main()
{
	const double RATE  = 26;   
	const int STANDARD = 40;
	double pay = 0.0;
	int hours; 
	
	printf("输入工作的小时数:");
	scanf("%d",&hours);
	printf("\n");
	if (hours > STANDARD){
		pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
	}else pay = hours * RATE;
	printf("工资为%f\n",pay);
	return 0;
 } 
