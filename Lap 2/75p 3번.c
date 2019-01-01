// <2장 Programming 3번: 세 개의 정수, 평균값 계산>
// 작성자: 509, 신 혜민(B889041)
// 날짜  : 2018년 9월 13일
// 설명  : 이 프로그램은 사용자로부터 세 개의 정수를 입력받은 후, 평균값을 계산하여 화면에 출력한다.

#include <stdio.h>

int main()
{
	int x;
	int y;
	int z;
	int average;

	printf("정수를 입력하시오 :");
	scanf_s("%d", &x);

	printf("정수를 입력하시오 :");
	scanf_s("%d", &y);

	printf("정수를 입력하시오 :");
	scanf_s("%d", &z);

	average=(x + y + z) / 3;
	printf("평균은 %d 입니다.", average);

	return 0;
}