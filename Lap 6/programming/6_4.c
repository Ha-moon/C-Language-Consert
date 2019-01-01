// <6장 Programming 4번 정수 더하기>
// 작성자: 509, 신 혜민(B889041)
// 날짜  : 2018년 10월 11일
// 설명  : 사용자로부터 정수를 입력받아 계속 더한다. 0을 입력하면 합계를 출력하고 종료한다.
#include <stdio.h>

int main()
{
	int n=1;
	int sum = 0;
	while (n != 0) {
		printf("정수를 입력하시오: ");
		scanf("%d", &n);
		sum = sum + n;
	}
	printf("합계=%d", sum);
	return 0;
}