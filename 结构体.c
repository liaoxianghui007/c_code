#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
struct -- �ṹ��

*/
struct Person
{
	char name[20];
	int age;
	char gender[20];
};

int main() {

	struct Person a = { "�����", 36 ,"��" };
	struct Person b = { "������", 36 ,"Ů" };
	struct Person c = { "���", 10 ,"��" };

	printf("�������������֣�%s\n", b.name);
	printf("�������������䣺%d\n", b.age);
	printf("�����������Ա�%s\n", b.gender);
	return 0;
}