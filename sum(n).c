//y=1+1/2+1/3+1/4+...+1/n
#include<stdio.h>
int main()
{
	int i,n;
double sum=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=1.0/i;
		
	}printf("f(%d)=%f\n",n,sum);
	return 0;
}
