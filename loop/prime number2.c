//100�������е���������ͳ���ж��ٸ� 
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
		printf("%d������\n",x);
		
 }
	 
	 }printf("����%d��\n",count);
	 return 0;
}