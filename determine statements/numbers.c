//һ����Ȼ���ж���λ
#include<stdio.h>
int main()
{
	int a;             //ע��int��Χ 
	int b=0;         
	scanf("%d",&a);
	    b++;           //����8 9�п�����0 
		a/=10;
	while(a>0){
		b++;           //11 12�л���λ�� 
		a/=10;
		
	}printf("�ܹ���%dλ\n",b);
	return 0;
 } 