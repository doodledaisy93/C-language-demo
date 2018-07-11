//统计素数并求和
//要求统计给定整数m到n之间素数的个数并对他们求和
//输入格式：输入在一行中给出2个正整数m和n（1≤m≤n≤500）
//输出格式：在一行中顺序输出m和n区间内素数的个数以及他们的和，数字间以空格分隔
//输入样例： 10 31
//输出样例：7 143 
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
