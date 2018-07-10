//零钱凑整钱
//用1毛，2毛，5毛零钱凑整钱 
#include<stdio.h>
int main()
{
	int i,j,k,n;
	int count=0;
	scanf("%d",&n);
	
	
	for(i=0;i<=10*n;i++){
		for(j=0;j<=5*n;j++){
			for(k=0;k<=2*n;k++)
			if(i+2*j+5*k==n*10){
			count++;
			printf("%d个1毛，%d个2毛，%d个5毛能凑成%d块钱\n",i,j,k,n);
		}
	}
	}printf("共有%d种组合",count);
	return 0;
}
