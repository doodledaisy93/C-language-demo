//һ��δ֪���ȵ�����������,������0��ռ�ı�������������
//����һ��������á�����̫���� 
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	int count1=0;
	int count2=0;
	int count3=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			count1++;
		}
	}
	rate1=1.0*count1/n;
	printf("%d/%d\n",count1,n);
	for(i=0;i<n;i++){
		if(a[i]<0){
			count2++;
		}
	}
	rate2=1.0*count2/n;
	printf("%d/%d\n",count2,n);
	for(i=0;i<n;i++){
		if(a[i]==0){
			count3++;
		}
	}
	rate3=1.0*count3/n;
	printf("%d/%d\n",count3,n);
	return 0;
}