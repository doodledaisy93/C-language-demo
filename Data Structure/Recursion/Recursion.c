//�ݹ���f(n) 
//��n<=1ʱ��f(n)=1;���������f(n)=n*f(n-1) 
#include<stdio.h>
int fun(int n){
	if(n==1){						//�ݹ���� 
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