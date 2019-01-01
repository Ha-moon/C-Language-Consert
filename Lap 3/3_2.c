//<3장 Programming 2번: 아스키 코드 출력>
//작성자: 509 신 혜민(B889041)
//날짜 :2018년 9월 20일
//설명 : 사용자에게 받은 문자의 아스키 코드를 출력한다.

#include <stdio.h>

int main()
{
	char c;
	printf("문자를 입력하시오: ");
	scanf_s("%c", &c);
	printf("아스키코드: %d", c);

	return 0;
}