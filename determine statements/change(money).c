//找零钱
// 输入已支付金额与该支付的金额
//根据用户输入计算找钱或告知余额不足
#include<stdio.h>
int main()
{
	int a , b ;//a为 已支付 b为该支付
	scanf("%d",&b);
	scanf("%d",&a);
	if(b - a < 0){
		printf("余额不足\n"); 
	}else 
	printf("找您%d元\n",b-a);
	return 0;
 } 
