//��Ǯ����Ǯ
//��1ë��2ë��5ë��Ǯ����Ǯ 
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
			printf("%d��1ë��%d��2ë��%d��5ë�ܴճ�%d��Ǯ\n",i,j,k,n);
		}
	}
	}printf("����%d�����",count);
	return 0;
}
