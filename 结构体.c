#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
struct -- �ṹ��
.  -- �ṹ�����.��Ա
-> --ָ����� -> ��Ա

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

	printf("�������������֣�%s\n", a.name);
	printf("�������������䣺%d\n", a.age);
	printf("�����������Ա�%s\n", a.gender);

	//ͨ��&��a���ڴ��ַ�������ṹ��ָ�����pa
	struct Person* pa = &a;
	//ͨ���ṹ��ָ�����pa����ȡa��name����ֵ
	printf("%s\n", pa->name);
	return 0;
}