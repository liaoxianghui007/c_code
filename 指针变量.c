#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



int main() {

	int a = 11;
	printf("����a�ǣ�%d\n", a);

	//��a�ĵ�ֵַ����ָ�����p
	int* p = &a;

	//ͨ��ָ�����p���ı�a��ֵ
	*p = 35;
	printf("����a�ǣ�%d\n", a);
	
	return 0;
}