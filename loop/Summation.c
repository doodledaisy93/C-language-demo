//把一个整数中各个位的数加起来
//12345->1+2+3+4+5=15
#include<stdio.h>
int main()
{
	int a;
	int sum=0;
	scanf("%d",&a);
	int b;
	while(a>0){
		b=a%10;
		a/=10;
		sum+=b;
	}printf("%d\n",sum);
	return 0;
 } 
