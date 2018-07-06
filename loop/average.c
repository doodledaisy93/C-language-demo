//算平均数
//读到-1就结束 
#include<stdio.h>
int main()
{
	int a;
	int sum=0;
	int count=0;
	scanf("%d",&a);
	while(a!=-1){
		sum+=a;
		count++;
		scanf("%d",&a);	
	}
	printf("平均数为%f\n",1.0*sum/count);         //平均数未必是整数。乘1.0转化为浮点数 
	return 0;
 }
// #include<stdio.h>
// int main()
// {
// 	int a;
// 	int sum=0;
// 	int count=0;
// 	do{
// 		scanf("%d",&a);
// 		if(a!=-1){                               //26 30行都要判断a！=-1，浪费时间，不选择此种方法 
// 			sum+=a;
// 			count++;
//		 }
//	 }while(a!=-1);
//	 printf("平均数为%f\n",1.0*sum/count); 
//	 return 0;
//  } 
