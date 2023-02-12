#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
struct -- 结构体

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

	printf("他（她）的名字：%s\n", b.name);
	printf("他（她）的年龄：%d\n", b.age);
	printf("他（她）的性别：%s\n", b.gender);
	return 0;
}