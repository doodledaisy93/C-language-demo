//һ����Ȼ���ж���λ 
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
	printf("�ܹ���%dλ",b);
	return 0;
 } 