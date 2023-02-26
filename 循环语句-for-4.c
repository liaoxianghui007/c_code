#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
	int i = 0;
	int num = 1;//声明阶乘数值
	int sum = 0;//声明阶乘的和
	

	//求1！、2！、3！...10!的和
	for (i = 1; i <= 10; i++) {
		
		num *= i;
		sum += num;
	}
	
	
	printf("%d ", sum);//打印结果
	

	return 0;
}
