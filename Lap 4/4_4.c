//<4장 Programming 4번: 자리수 분리>
//작성자: 509 신 혜민(B889041)
//날짜 :2018년 9월 27일
//설명 : 세 자리로 이루어진 숫자를 입력받은 후 각각의 자리수를 분리하여 출력
#include <stdio.h>

int main()
{
	int x;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	int site100 = x / 100;
	printf("백의 자리수: %d\n", site100);

	x = x % 100;
	int site10 = x / 10;
	printf("십의 자리수: %d\n", site10);

	int site1 = x % 10;
	printf("일의 자리수: %d", site1);

	return 0;
}