// <5장 Programming 4번 삼각형 종류>
// 작성자: 509, 신 혜민(B889041)
// 날짜  : 2018년 10월 04일
// 설명  : 삼각형 세 변의 길이를 입력 받아서 삼각형의 종류를 결정
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("삼각형의 세변을 입력하시요:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a == b || b == c || c == a) {
		if (a == b == c)
			printf("정삼각형");
		else
			printf("이등변 삼각형");
	}
	else
		printf("일반 삼각형");
	return 0;
}