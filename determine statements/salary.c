//���㹤��
//��׼ʱнΪ8.25Ԫ
//�Ӱఴ1.5��ʱн
#include<stdio.h>
int main()
{
	const double RATE  = 26;   
	const int STANDARD = 40;
	double pay = 0.0;
	int hours; 
	
	printf("���빤����Сʱ��:");
	scanf("%d",&hours);
	printf("\n");
	if (hours > STANDARD){
		pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
	}else pay = hours * RATE;
	printf("����Ϊ%f\n",pay);
	return 0;
 } 