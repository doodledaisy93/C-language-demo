//�ɼ�ת��
//���ٷ���ת��Ϊ�����
//[90,100]A
//[80,90)B
//[70,80)C
//[60,70)D
//[0,60)E
#include<stdio.h>
int main()
{
	int score;
	printf("����ɼ�\n");
	scanf("%d",&score);
	int m = score / 10 ;
	switch(m)
	{
		case 10:
		case  9:
			printf("A\n");
			break;
		case  8:
			printf("B\n");
			break;
		case  7:
			printf("C\n");
			break;
		case  6:
			printf("D\n");
			break;
		default:
			printf("������\n");
			break; 
	}
	return 0;
}