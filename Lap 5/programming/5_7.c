// <5장 Programming 7번 이차 방정식 근 계산>
// 작성자: 509, 신 혜민(B889041)
// 날짜  : 2018년 10월 04일
// 설명  : 계수를 입력받아 이차 방정식의 근을 계산한다.
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, x, x1, x2;
	printf("계수 a를 입력하시오 : ");
	scanf("%f", &a);
	printf("계수 b를 입력하시오 : ");
	scanf("%f", &b);
	printf("계수 c를 입력하시오 : ");
	scanf("%f", &c);
	if (a == 0) {
		x = -c / b;
		printf("위의 이차 방정식의 중근은 %f입니다", x);
	}
	else if ((b*b - 4 * a*c) < 0){
		printf("실근은 존재하지 않습니다");
	}
	else {
		x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
		x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
		printf("위의 이차 방정식의 실근은 %f과 %f입니다", x1, x2);
	}
	return 0;
}