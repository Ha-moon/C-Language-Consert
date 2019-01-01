//<3장 Programming 4번: 제곱미터를 평으로 환산하여 출력>
//작성자: 509 신 혜민(B889041)
//날짜 :2018년 9월 20일
//설명 : 사용자에게 제곱미터를 받은 후 평으로 환산하여 출력한다.

#include <stdio.h>
#define EXCHANGE_SPACE 0.3025

int main()
{
	float m;
	float size;
	printf("면적을 제곱미터 단위로 입력하시오: ");
	scanf_s("%f", &m);
	size = EXCHANGE_SPACE * m;
	printf("%f제곱미터는 %f평입니다.", m, size);

	return 0;
}