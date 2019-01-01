//<8장 Programming 13번: 재귀 프로그램>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 22일
//설명 : 재귀적인 프로그램을 작성하여 계산식을 계산한다.

#include <stdio.h>

int sum(int n) {
	if (n == 1) return 1;
	else return n*n*n + sum(n - 1);
}

int main() {
	int x, result;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	result = sum(x);
	printf("%d", result);

	return 0;
}