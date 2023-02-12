#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



int main() {

	int a = 11;
	printf("现在a是：%d\n", a);

	//将a的地址值赋给指针变量p
	int* p = &a;

	//通过指针变量p，改变a的值
	*p = 35;
	printf("现在a是：%d\n", a);
	
	return 0;
}