#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
	int i = 0;
	int sum = 0;//�����׳˵ĺ�
	int num = 1;//�����׳���ֵ

	//��1����2����3��...10!�ĺ�
	for (i = 1; i <= 10; i++) {
		
		num *= i;
		sum = num + sum;
	}
	
	
	printf("%d ", sum);//��ӡ���
	

	return 0;
}