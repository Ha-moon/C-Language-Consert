#include <stdio.h>

int main()
{
	float x, y;
	printf("정수를 입력하시오: ");
	scanf("%f", &x);
	y = ((double)(x*x*x - 20) / (x - 7));
	printf("수식의 값은 %f입니다", y);
	return 0;
}