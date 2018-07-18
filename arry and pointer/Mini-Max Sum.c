#include<stdio.h>
int main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);							
	}
	long long int sum=0;				//输入的整数超过int范围 
	for(i=0;i<5;i++){
	sum+=a[i];
	}
	int max=a[0];						 
	int min=a[0];
	for(i=1;i<5;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("%lld %lld",sum-max,sum-min);
	return 0;
}
