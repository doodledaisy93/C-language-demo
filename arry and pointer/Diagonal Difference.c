//给一个矩阵，求左对角线上各元素的和减去右对角线上个元素的和
//最终输出差值的绝对值 
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);					//读入二位数组					
		}
	}
	int sum1=0;										 
	int sum2=0;										 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum1+=a[i][j];						//左对角线的和
			}
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(n-1==i+j){
				sum2+=a[i][j];						//右对角线的和 
			}
		}
	}
	int sum=0;
	sum=sum1-sum2;									 
	if(sum<0){
		sum=-1*sum;									//如果差值为负则*-1 
	}
	printf("%d",sum);
	return 0;
}
