#include <stdio.h>

int main()
{
	float x;
	float y;
	printf("x의 값을 입력하시오: ");
	scanf_s("%f", &x);
	y = 2*x;
	printf("다항식의 값은 %f 입니다.", y);

	return 0;
}