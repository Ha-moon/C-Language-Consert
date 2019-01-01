//<9장 Programming 4번: 실수 정수/소수로 나누기>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 29일
//설명 : 실수를 정수부와 소수부로 나누어서 보내주는 함수를 만든다.

#include <stdio.h>

void get(double value, int *i_part, double *f_part);

int main() {
	double a = 3.14;
	int n;
	double f;
	
	get(a, &n, &f);
	printf("정수부=%d\n", n);
	printf("소수부=%lf\n", f);
	return 0;
}

void get(double value, int *i_part, double *f_part) {
	*i_part = (int)value;
	*f_part = value - *i_part;
}