//ͳ�����������
//Ҫ��ͳ�Ƹ�������m��n֮�������ĸ��������������
//�����ʽ��������һ���и���2��������m��n��1��m��n��500��
//�����ʽ����һ����˳�����m��n�����������ĸ����Լ����ǵĺͣ����ּ��Կո�ָ�
//���������� 10 31
//���������7 143 
#include<stdio.h>
int main()
{
	int m,n,i;
	int count=0;
	int sum=0;
	scanf("%d %d",&m,&n);
	if(m==1){
		m=2;
	}
	for(i=m;i<=n;i++){
		int isprime=1;
		int j;
		for(j=2;j<i-1;j++){
			if(i%j==0){
				isprime=0;
				break;
			}
		}if(isprime){
			count++;
			sum+=i;
		}
	}printf("%d %d\n",count,sum);
	return 0;
 } 