//��a b�����Լ��
//շת����������b=0�����������a�������Լ��
//���򣬼���a����b����������a=b,��b=�ĸ����� 
//�ص���һ��
#include<stdio.h>
int main()
{
	int a,b,t;        		//tΪ����
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}printf("���Լ��Ϊ%d\n",a);
	return 0;
 } 