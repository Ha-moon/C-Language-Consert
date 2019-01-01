// <6장 Programming 11번 중첩 반복문 사용>
// 작성자: 509, 신 혜민(B889041)
// 날짜  : 2018년 10월 11일
// 설명  : 정수를 하나씩 늘리며 출력한다.
#include<stdio.h>

int main()
{
	int n, i, j;
	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("%3d ", j);
		printf("\n");
	}
	return 0;
}