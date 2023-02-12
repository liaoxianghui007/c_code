#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
struct -- 结构体
.  -- 结构体变量.成员
-> --指针变量 -> 成员

*/
struct Person
{
	char name[20];
	int age;
	char gender[20];
};

int main() {

	struct Person a = { "廖相辉", 36 ,"男" };
	struct Person b = { "甘立芳", 36 ,"女" };
	struct Person c = { "廖宇辰", 10 ,"男" };

	printf("他（她）的名字：%s\n", a.name);
	printf("他（她）的年龄：%d\n", a.age);
	printf("他（她）的性别：%s\n", a.gender);

	//通过&将a的内存地址，赋给结构体指针变量pa
	struct Person* pa = &a;
	//通过结构体指针变量pa，读取a的name属性值
	printf("%s\n", pa->name);
	return 0;
}