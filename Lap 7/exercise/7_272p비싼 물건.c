//<7장 272p:가장 비싼 물건 찾기>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 10월 25일
//설명 : 가장 비싼 물건을 찾는다.

#include <stdio.h>
#define SIZE 10000
#include <stdlib.h>
#include <limits.h>

int main()
{
	int prices[SIZE] = { 0 };
	int i, maximum,j;

	for (j = 0; j < 30; j++) {
		printf("%d ", prices[j]);
	}
	printf("]\n");

	for (i = 0; i < SIZE; i++) {
		prices[i] = rand();
	}

	maximum = INT_MIN;

	for (i = 1; i < SIZE; i++) {
		if (prices[i] > maximum)
			maximum = prices[i];
	}
	printf("최대값은 %d입니다.\n", maximum);
	return 0;
}