//<7장 274p:배열에서 특정한 값 탐색>
//작성자: 509, 신 혜민(B889041)
//날짜 : 2018년 10월 25일
//설명 : 배열에서 특정한 값을 탐색한다.
#include <stdio.h>
#define SIZE 100000
#include <stdlib.h>

int main()
{
	long key, i, j;
	long list[SIZE] = { 0 };
	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		list[i] = rand();
	}
	for (j = 0; j < 30; j++) {
		printf("%d ", list[j]);
	}
	printf("]\n");

	printf("탐색할 값을 입력하시오:");
	scanf_s("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("탐색 성공 인덱스= %d\n", i);
			break;
		}
	}
	return 0;
}