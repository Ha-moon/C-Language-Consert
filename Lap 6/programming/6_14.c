// <6장 Programming 14번 정수제곱 계산>
// 작성자: 509, 신 혜민(B889041)
// 날짜  : 2018년 10월 18일
// 설명  : 정수제곱 값을 계산하여 출력한다.
#include<stdio.h>

int main()
{
	int i, n;
	int result = 0;
	printf("n의 값을 입력하시오: ");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
		result += i*i;
	printf("계산값은 %d입니다.", result);
	return 0;
}