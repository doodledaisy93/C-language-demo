//��ƽ����
//����-1�ͽ��� 
#include<stdio.h>
int main()
{
	int a;
	int sum=0;
	int count=0;
	scanf("%d",&a);
	while(a!=-1){
		sum+=a;
		count++;
		scanf("%d",&a);	
	}
	printf("ƽ����Ϊ%f\n",1.0*sum/count);         //ƽ����δ������������1.0ת��Ϊ������ 
	return 0;
 }
// #include<stdio.h>
// int main()
// {
// 	int a;
// 	int sum=0;
// 	int count=0;
// 	do{
// 		scanf("%d",&a);
// 		if(a!=-1){                               //26 30�ж�Ҫ�ж�a��=-1���˷�ʱ�䣬��ѡ����ַ��� 
// 			sum+=a;
// 			count++;
//		 }
//	 }while(a!=-1);
//	 printf("ƽ����Ϊ%f\n",1.0*sum/count); 
//	 return 0;
//  } 