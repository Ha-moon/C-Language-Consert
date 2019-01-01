//<8장 312p 예제#3:x의 y승 계산>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 11월 08일
//설명 : x의 y승을 계산하여 반환한다.

#include <stdio.h>

int get_integer()
{
	int value;
	printf("정수를 입력하시오 : ");
	scanf("%d", &value);
	return value;
}

int power(int x, int y)
{
	int i;
	long result = 1;
	for (i = 0; i < y; i++)
		result *= x;
	return result;
}

int main(void)
{
	int x = get_integer();
	int y = get_integer();
	int result = power(x, y);
	printf("%d의 %d승 = %d \n", x, y, result);
	return 0;
}