//分段函数
//y=-1;x<0
//y=0;x=0
//y=2x;x>0
#include <stdio.h>
int main()
{
	double x;
	double y;
	scanf("%lf",&x);
	switch(x>=0){
		case 1: 
		y=2*x;
		break;
		default:
		y=-1;
		break;
	}printf("y=%f\n",y);
	return 0;
 } 
