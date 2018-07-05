//一个数字有多少位
#include<stdio.h>
int main()
{
	int a;             //注意int范围 
	int b=0;         
	scanf("%d",&a); 
	while(a>0){
		a/=10;
		b++;
		
	}printf("总共有%d位\n",b);
	return 0;
 } 
