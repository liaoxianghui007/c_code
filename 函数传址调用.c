#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int Swap(int* pa ,int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}


int main()
{

	int a = 20;
	int b = 50;

	Swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}