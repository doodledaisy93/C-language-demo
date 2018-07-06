//100以内所有的素数，并统计有多少个 
#include<stdio.h>
int main()
{
	int x;
	int count=0;
	for(x=2;x<=100;x++){
	//scanf("%d",&x);
	int isprime=1;
	for(int i=2;i<x;i++){
		if(x%i==0){
			isprime=0;
			break;
		}
	}if(isprime==0){
		
	}else{
	    count++;
		printf("%d是素数\n",x);
		
 }
	 
	 }printf("共有%d个\n",count);
	 return 0;
}
