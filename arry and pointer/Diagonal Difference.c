//��һ����������Խ����ϸ�Ԫ�صĺͼ�ȥ�ҶԽ����ϸ�Ԫ�صĺ�
//���������ֵ�ľ���ֵ 
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);					//�����λ����					
		}
	}
	int sum1=0;										 
	int sum2=0;										 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum1+=a[i][j];						//��Խ��ߵĺ�
			}
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(n-1==i+j){
				sum2+=a[i][j];						//�ҶԽ��ߵĺ� 
			}
		}
	}
	int sum=0;
	sum=sum1-sum2;									 
	if(sum<0){
		sum=-1*sum;									//�����ֵΪ����*-1 
	}
	printf("%d",sum);
	return 0;
}