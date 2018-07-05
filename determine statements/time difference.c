//计算时间差
//输入两个时间，每个时间分别输入小时与分钟的值
// 再输出两个时间的差，也以小时与分钟表示
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
	printf("过了%d小时%d分\n",h,m);
    
 
 
 }
  
 
 
