#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
	//打印数组中的元素
	/*int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}*/
	
	
	//for循环的嵌套
	/*int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <10; j++) {

			printf("hehe\n");
		}

	}*/

	
	//for循环中的并列条件表达式
	/*int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
	{
		printf("liao xiang hui\n");
	}*/
	
	
	//1到10的阶乘之和
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
