//递归求f(n) 
//当n<=1时，f(n)=1;其他情况下f(n)=n*f(n-1) 
#include<stdio.h>
int fun(int n){
	if(n==1){						//递归出口 
		return 1;
	}else{
		return fun(n-1)*n;
	}
}


int main()
{
	int i;
	scanf("%d",&i);
	fun(i);
	printf("%d",fun(i));
	return 0;
}
