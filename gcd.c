//求a b的最大公约数
//辗转相除法：如果b=0，计算结束，a就是最大公约数
//否则，计算a除以b的余数，让a=b,而b=哪个余数 
//回到第一步
#include<stdio.h>
int main()
{
	int a,b,t;        		//t为余数
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}printf("最大公约数为%d\n",a);
	return 0;
 } 
