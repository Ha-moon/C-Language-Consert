#include <stdio.h>

int main()
{
	char name;
	char address;
	long number;
	
	printf("�̸�:");
	scanf_s("%c", &name);

	printf("�ּ�:");
	scanf_s("%c", &address);

	printf("��ȭ��ȣ:");
	scanf_s("%lf", &number);

	return 0;
}