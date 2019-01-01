//<9장 연습문제 8번: 포인터 이해>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 29일
//설명 : 다음 프로그램을 출력해보고 이해한다.

#include <stdio.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6 };
	int *p = a;
	int *q = a + 3;

	printf("%d\n", *(a+1));
	printf("%d\n", *(p + 2));
	printf("%d\n", *(q + 3));
	return 0;
}