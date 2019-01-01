//<8장 Programming 4번: 정수의 약수 찾기>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 08일
//설명 : 주어진 정수의 약수를 찾아서 출력한다.

#include <stdio.h>

void get_divisor(int x)
{
	printf("%d의 약수=", x);
	for (int i = 1; i <= x; i++) {
		if (x%i == 0)
			printf("%d ", i);
		else
			continue;
	}
}

int main() {
	get_divisor(10);
	return 0;
}