//判断是否为素数 
#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int isprime=0;
	for(int i=2;i<x;i++){
		if(x%i==0){
			isprime=1;             //如果取余得到0，就不是素数，将isprime赋值为1 
		}						   
	}if(isprime==0){
		printf("是\n");
	}else{
		printf("不是\n");
	}return 0;
}


	
	
