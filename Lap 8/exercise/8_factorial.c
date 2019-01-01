//<8장 326p: 순환호출함수>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 22일
//설명 : factorial로 순환호출을 이해한다.

#include <stdio.h>
long factorial(int n);

int main() {
	int x = 0, result;
	printf("정수를 입력하시오:");
	scanf("%d", &x);
	result = factorial(x);
	printf("%d!은 %d입니다\n", x, result);
	return 0;
}

int factorial(int n) {
	int f;
	printf("%d\n", n); // 입력 인수값 출력해보기 
	if (n == 1) 
		f = 1;
	else 
		f = n * factorial(n - 1);

	printf("n=%d, f=%d\n", n, f); // 결과 값 출력 해보기. 
	return f;
}