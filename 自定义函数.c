#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*printf() -- 打印功能的函数
  scanf()  -- 键盘输入的函数
  MAX()    -- 自定义函数，实行乘法运算。
*/


int MAX( x,  y) {
	    int z = x * y;
		return z;
}

int main(){

	int num1 = 0;
	int num2 = 0;
	int max;
	
	printf("请输入第一个数：\n");
	scanf("%d", &num1);

	printf("请输入第二个数：\n");
	scanf("%d", &num2);

	max = MAX(num1, num2);
	printf("乘积是：\n%d", max);

	return 0;
}