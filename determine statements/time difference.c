//����ʱ���
//��������ʱ�䣬ÿ��ʱ��ֱ�����Сʱ����ӵ�ֵ
// ���������ʱ��ĲҲ��Сʱ����ӱ�ʾ
#include<stdio.h>
int main()
{
	int h1, m1;
	int h2, m2;

	scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
	
	int h = h2 - h1;
	int m = m2 - m1;

	if(m<0){
		m = m + 60;
		h--;
	}
	printf("����%dСʱ%d��\n",h,m);
    
 
 
 }
  
 
 