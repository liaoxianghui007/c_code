#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*printf() -- ��ӡ���ܵĺ���
  scanf()  -- ��������ĺ���
  MAX()    -- �Զ��庯����ʵ�г˷����㡣
*/


int MAX( x,  y) {
	    int z = x * y;
		return z;
}

int main(){

	int num1 = 0;
	int num2 = 0;
	int max;
	
	printf("�������һ������\n");
	scanf("%d", &num1);

	printf("������ڶ�������\n");
	scanf("%d", &num2);

	max = MAX(num1, num2);
	printf("�˻��ǣ�\n%d", max);

	return 0;
}