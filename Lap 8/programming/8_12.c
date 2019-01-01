//<8장 Programming 12번: 정수의 각 자리수 출력>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 15일
//설명 : 재귀 호출을 이용하여 정수의 각 자리수를 출력한다.

#include <stdio.h>
void show_digit(int x) {
		if (x > 10) {
			show_digit(x / 10);
			printf("%2d", x % 10);
		}
		else printf("%2d", x);
	}
	
int main() {
	int num;
	printf("정수를 입력하시오:");
	scanf("%d", &num);
	show_digit(num);
	return 0;
}