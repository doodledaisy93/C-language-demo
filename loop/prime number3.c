//输出前50个素数，并告知最后一个素数是多少 
#include<stdio.h>
int main()
{
	int x;
	int count=0;
	for(x=2;count<50;x++){
	int isprime=1;
	for(int i=2;i<x;i++){
		if(x%i==0){
			isprime=0;
			break;
		}
	}if(isprime==0){
		
	}else{
	    count++;
		printf("%d\t",x);
		if(count%5==0){
			printf("\n");
		}
		
 }
	 
	 }printf("最后一个是%d\n",x-1);
	 return 0;
}
