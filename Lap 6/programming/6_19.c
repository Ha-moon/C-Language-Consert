// <6장 Programming 19번 피보나치 수열>
// 작성자: 509, 신 혜민(B889041)
// 날짜  : 2018년 10월 18일
// 설명  : 피보나치 수열을 계산한다.
#include <stdio.h>
int main()
{
	int n;
	printf("몇번째 항까지 구할까요? ");
	scanf("%d", &n);
	int a = 0, b = 1,c,i=0;
	while (i <= n) {
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
		i++;
	}

	return 0;
}