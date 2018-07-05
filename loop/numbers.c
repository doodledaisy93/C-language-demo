//一个自然数有多少位
#include<stdio.h>
int main()
{
	int a;             //注意int范围 
	int b=0;         
	scanf("%d",&a);
	    b++;           //加上8 9行可以数0  
	    a/=10;
	while(a>0){
	    b++;           //11 12行换了位置 
	    a/=10;
		
	}printf("总共有%d位\n",b);
	return 0;
 } 
