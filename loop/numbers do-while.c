//一个自然数有多少位 
#include<stdio.h>
int main()
{
	int a;
	int b=0;
	scanf("%d",&a);
	do{
		a/=10;
		b++;
	}while(a>0);
	printf("总共有%d位",b);
	return 0;
 } 
