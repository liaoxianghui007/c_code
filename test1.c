#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//初建C语言代码


//include 包含一个叫stdio.h的文件
//stdio.h 标准输入输出

//int 整型，main前的int表示main函数调用返回的整型值

/*
int main()//主函数 - 程序的入口 - 唯一
{
	//这里执行任务，在屏幕上输出hello world
	//printf()--打印函数
	printf("hello world\n");
	return 0;
}
*/



//数据类型

//字符数据类型 - char
//短整型       - short
//整型         - int
//长整型       - long
//更长的整型   - long long
//单精度浮点数 - float
//双精度浮点数 - double



//char 
//int main()
//{
//	//char ch = 'A';
//	//printf("%c\n", ch);//%c - 打印字符格式的数据
//
//	int age = 20;
//	printf("%d\n", age);//%d - 打印整型十进制数据
//	return 0;
//}


//int MAX(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main(){
//
//	int num1 = 55;
//	int num2 = 23;
//	int max = 0;
//
//	max = MAX(num1, num2);
//	printf("较大值是：%d\n", max);
//
//	return 0;
//}


//int test() {
//
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//
//
//int main() {
//
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//

int main(){

	char a = 'W';
	printf("通过整型变量改变后的值：%c\n", a);
	char* p = &a;
	*p = 'R';
	printf("通过指针变量改变后的值：%c\n",*p);
	printf("确认通过指针变量改变的值：%c\n", a);
	return 0;
}