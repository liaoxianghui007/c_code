#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����C���Դ���


//include ����һ����stdio.h���ļ�
//stdio.h ��׼�������

//int ���ͣ�mainǰ��int��ʾmain�������÷��ص�����ֵ

/*
int main()//������ - �������� - Ψһ
{
	//����ִ����������Ļ�����hello world
	//printf()--��ӡ����
	printf("hello world\n");
	return 0;
}
*/



//��������

//�ַ��������� - char
//������       - short
//����         - int
//������       - long
//����������   - long long
//�����ȸ����� - float
//˫���ȸ����� - double



//char 
//int main()
//{
//	//char ch = 'A';
//	//printf("%c\n", ch);//%c - ��ӡ�ַ���ʽ������
//
//	int age = 20;
//	printf("%d\n", age);//%d - ��ӡ����ʮ��������
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
//	printf("�ϴ�ֵ�ǣ�%d\n", max);
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
	printf("ͨ�����ͱ����ı���ֵ��%c\n", a);
	char* p = &a;
	*p = 'R';
	printf("ͨ��ָ������ı���ֵ��%c\n",*p);
	printf("ȷ��ͨ��ָ������ı��ֵ��%c\n", a);
	return 0;
}