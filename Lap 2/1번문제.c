#include <stdio.h>

int main()
{
	char name;
	char address;
	long number;
	
	printf("이름:");
	scanf_s("%c", &name);

	printf("주소:");
	scanf_s("%c", &address);

	printf("전화번호:");
	scanf_s("%lf", &number);

	return 0;
}